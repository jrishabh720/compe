#include<iostream>
#include<algorithm>

using namespace std;

int find(int arr[], int n){

	for(int k=0; k<n; k++)
	{
		if(arr[k] == 0)
		{
		return k;	
		}
	}
};

int main()
{
	int N;
	cin>>N;
	
	int n = (N+1)/2;
	int lock[n];
	int key[n];
	for(int i=0; i<n; i++)
	{
		cin>>lock[i];
	}
	for(int j=0; j<n-1; j++)
	{
		cin>>key[j];
	}
	sort(lock, lock+n);
	sort(key, key+n-1);
	
	int flag =0;

   key[n]= 32767;	
   int arr[n] = {0};
   for(int k=0; k<n; k++)
	{
		if(lock[k] == key[k])
		{
		   arr[k] = 1;	
		}
		 
	}
	int c = find(arr,n);
	cout<<lock[c];	
}
