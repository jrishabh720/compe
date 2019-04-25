#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin>>N;
	long arr[N];
	long answer = 1;
	long con = 7;
	for(int i=0; i<N; i++)
	{
		cin>>arr[i];
		answer = ((answer * arr[i]) % 1000000007);
	}
	cout<<answer;
	
}
