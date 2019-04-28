// C program to print all permutations with duplicates allowed 
#include <stdio.h> 
#include <string.h> 

/* Function to swap values at two pointers */
void swap(char *x, char *y) 
{ 
	char temp; 
	temp = *x; 
	*x = *y; 
	*y = temp; 
} 

/* Function to print permutations of string 
This function takes three parameters: 
1. String 
2. Starting index of the string 
3. Ending index of the string. */
void permute(char *a, int l, int r) 
{ 
int i; 
if (l == r) 
	printf("i = %d l = %d %s\n",i,l,a); 
else
{ 
	for (i = l; i <= r; i++) 
	{ 
		swap((a+l), (a+i));
		printf("1 i = %d l = %d %s  ",i,l,a); 
		permute(a, l+1, r); 
		swap((a+l), (a+i)); //backtrack 
		printf("2 i = %d l = %d %s  ",i,l,a);  
	} 
} 
} 

/* Driver program to test above functions */
int main() 
{ 
	char *str; 
	gets(str); 
	permute(str, 0, strlen(str)-1); 
	getch();
	return 0; 
} 

