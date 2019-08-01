#include<iostream>
#include<vector>
#define l long long int
#include <bits/stdc++.h> 
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	
	l count = 0;
	l S,X;
	int N;
	cin>>S>>X>>N;
	l arr[N] = {0};
	l ind;
	l val;
	for(int j=0; j<N; j++)
	{
		cin>>ind>>val;
		arr[ind] = val;

	}
	l i=1;
	while(S>0)
	{
		cout<<arr[i-1][0];
		if(arr[] == ])
		{
			S = S-arr[i-1][1];
			++count;
			cout<<"Y ";
		}
		else
		{
			S = S-X;
			++count;
			cout<<"N ";
		}
		++i;
	}
	cout<<count;
	
}
