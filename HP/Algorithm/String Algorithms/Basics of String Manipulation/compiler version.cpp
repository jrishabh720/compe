//#include<iostream>
//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//	str
//}

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//
//string input;
//string line;
//
//cout<< "Enter the input line" << endl;
//
//while (getline(cin, line))
//{
//    if (line == "^D")
//        break;
//
//    input += line;
//}
//
// cout<< "The input entered was: "<<endl;
// cout<< input<< endl;
//
//}

#include<stdio.h>
#include<string.h>
int main()
{
	int b,i,j;
	char str[2000];
	while(gets(str)!=NULL)
	{
		b=strlen(str);
		for(i=0;i<=b-1;i++)
		{
			if(str[i]=='/' && str[i+1]=='/')
			{
				break;
			}
			else
			{
				if(str[i]=='-' && str[i+1]=='>')
				{
					str[i]='.';
					for(j=i+1;j<=b-1;j++)
					{
						str[j]=str[j+1];
					}
					
				}
			}
		}
		printf("%s\n",str);
	}
	return 0;
}
