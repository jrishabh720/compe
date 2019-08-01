#include<stdio.h>
int r()
{
	static int num = 7;
    
	num--;
	return num;
	
}

int main()
{
	for(r(); r(); r())
	{ 
//		printf("before %d\n", num);
		printf("inside %d\n",r());
//		printf("after %d\n", num);
	
	}
	return 0;
}
