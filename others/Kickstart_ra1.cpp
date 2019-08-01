#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include <bits/stdc++.h> 
using namespace std;



int main()
{
	int t; cin>>t;
	for(int i=1; i<=t; i++)
	{
		long int N, P;
		cin>>N>>P;
		long int arr1[N];
		for(int j=0; j<N;j++)
		{
			cin>>arr1[j];
		}
		sort(arr1, arr1 + N, greater<long int>());
		
		int diff = N-P+1;
		int p =1;
		int pj=1;
		int k=N;
	    int arr[diff] = {1};
		for(int d=0; d<diff; d++)
		{
			long int maxi = arr1[p-1];
			long int sum = 0;
			for(int p; p<k; p++)
			{
				sum+= (maxi - arr1[p]);
				arr[d] = sum;
			}
		    pj++;
		    p=pj;
			k++;				
		}
		for(int m=0; m<diff; m++)
		{
			cout<<arr[m];
		}
		sort(arr, arr+diff);
		cout<<"Case #"<<i<<": "<<arr[0]<<endl;
	}
}
