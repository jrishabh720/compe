//not working
//#include<iostream>
//#include<string>
//#include<cmath>
//
//using namespace std;
//
//int main()
//{
//	int test;
//	cin>>test;
//	while(test--)
//	{
//		string str;
//		cin>>str;
//		int flag = 1;
//		int len = str.length();
//		for(int i=0; i<len-1; i++)
//		{
//			int diff = abs(str[i] - str[i+1]);
//			if(diff != 1)
//			{
//				flag = 0;
//			}
//			else if((str[i]=='a' && str[i+1]=='z') || (str[i]=='z' && str[i+1]=='a'))
//			{
//				flag = 1;
//			}
//			else
//			{
//				flag = 0;
//				break;
//			}
//		
//			
//		}
//		if(flag == 0)
//		{
//			cout<<"NO"<<endl;
//		}
//		else
//		{
//			cout<<"YES"<<endl;
//		}
//
//	}
//}
