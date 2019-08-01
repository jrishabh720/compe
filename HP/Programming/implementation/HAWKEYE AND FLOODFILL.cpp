#include<iostream>

using namespace std;

int main()
{
	long N;
	cin>>N;
	long** mat = new long*[N];
	for(int i = 0; i < N; ++i)
        mat[i] = new long[N];
	for(long p=0; p<N; p++)
	{
		for(long q=0; q<N; q++) 
		{
		   mat[p][q]= 0;
		}
	}
	
	long i,j,k;
	cin>>i>>j>>k;
	long m = i;
	long n = j;
	mat[i][j] = k;
	long temp = k;
	
	
	for(long p=0; p<N; p++)
	{
		for(long q=0; q<N; q++) 
		{
			cout<<mat[p][q]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	long diff = (N-i)>N-j ? N-i : N-j;

	temp = temp-1;
	long t = 1;
	while(diff > 0  && temp > 0)
	{ 
//		mat[i-t][j-t] = temp;
//		mat[i-t][j+t] = temp;
//		mat[i][j-t] = temp;
//		mat[i-t][j] = temp;
//		mat[i+t][j-t] = temp;
//		mat[i][j+t] = temp;
//		mat[i+t][j] = temp;
//		mat[i+t][j+t] = temp;
//		t++;

        i = m;
        j = n;
        i=i-t;
        for(j=j-t; j<=j+t; j++)
        	mat[i][j] = temp;
        i=i+t;
        for(j=j-t; j<=j+t; j++)
        	mat[i][j] = temp;
        	
        j=j-t;
        for(i=i-t; i<=i+t; j++)
        	mat[i][j] = temp;
        j=j+t;
        for(i=i-t; i<=i+t; j++)
        	mat[i][j] = temp;
        
        
		--diff;
		--temp;
		
		
		for(long p=0; p<N; p++)
     	{
			for(long q=0; q<N; q++) 
			{
				cout<<mat[p][q]<<" ";
			}
	     	cout<<endl;
	}
	cout<<endl;
		
		
	}
	for(long p=0; p<N; p++)
	{
		for(long q=0; q<N; q++) 
		{
			cout<<mat[p][q]<<" ";
		}
		cout<<endl;
	}
}
