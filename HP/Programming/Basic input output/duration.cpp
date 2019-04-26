#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int sh,sm,eh,em;
		cin>>sh>>sm>>eh>>em;
		int tsm = sh*60 + sm;
		int tem = eh*60 + em;
		int time = tem - tsm;
		
		int new_hr = time / 60;
		int new_min = time % 60;
		cout<<new_hr<<" "<<new_min<<endl; 
	}
}
