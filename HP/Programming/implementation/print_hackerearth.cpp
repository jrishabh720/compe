#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	string str;
	cin>>str;
	int len = str.length();
	int arr[7] = {0};
	for(int i=0; i<len; i++)
	{
		switch(str[i])
		{
		   case 'h' : arr[0]++;
			           break;
           case 'a' : arr[1]++;
                       break;
           case 'c' : arr[2]++;
                       break;
           case 'k' : arr[3]++;
                      break;
           case 'e' : arr[4]++;
                      break;
           case 'r' : arr[5]++;
                      break;
           case 't' : arr[6]++;
                      break;
           default : break;
		}
	}
	int c = arr[0];
    for(int j=0; j<7; j++)
	{
//		if(c>arr[j])
		{
			cout<<arr[j]<<" ";
//			c=arr[j];
		}
	}
	cout<<c;
}
