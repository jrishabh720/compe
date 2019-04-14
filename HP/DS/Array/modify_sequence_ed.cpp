//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin>>n;
//	int arr[n];
//	for(int i=0; i<n; i++)
//	{
//		cin>>arr[i];
//	}
//	for(int i=0; i<n-1; i++)
//	{
//		if((arr[i]==arr[i+1])   || arr[i+2]])
//	}
//}

#include<iostream>
using namespace std;
int main()
{
long long n,i,temp,num=0;
cin>>n;
for (i=0;i<n;i++)
{
cin>>temp; 
num+=temp;
num*=10;
num=num%11;
num%11;
num%11;
}
if (num%11==0)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
return 0;
}
