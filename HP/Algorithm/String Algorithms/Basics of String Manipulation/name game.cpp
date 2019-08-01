#include<iostream>
#include<stdio.h>
#include<map>
#include<cmath>
#include<conio.h>

using namespace std;
int main()
{
    map<int,char> m;
    map<int,char> :: iterator it;
	int temp;
	for(int i=65; i<=90; i++)
	{
		temp =1;
		for(int j=2; j<i; j++)
		{
			if(i%j == 0)
			{
				temp = 0;
			}
		}
		if(temp == 1)
		{
			char ch = i;
			m.insert({i, ch});
		}

	}
    for(int i=97; i<=122; i++)
	{
		temp =1;
		for(int j=2; j<i; j++)
		{
			if(i%j == 0)
			{
				temp = 0;
			}
		}
		if(temp == 1)
		{
			char ch = i;
			m.insert({i, ch});
		}

	}
	int test;
	cin>>test;
	while(test--)
    {
        int len;
        cin>>len;
        char str[len+1];
        for(int p=0; p<len; p++)
        {
            str[p] = getche();

        }
        str[len] = '\0';
        for(int s=0;s<len; s++)
        {
            int min = 26;
            int che = str[s];
            int pos = str[s];
            for(it = m.begin(); it!= m.end(); it++)
            {
                int diff = abs((it->first) - che);
                if(diff <= min)
                {
                    min = diff;
                    pos = it->first;
                }


            }
            str[s] = pos;


        }
        cout<<endl;
        for(int i=0; i<len; i++)
        {
            printf("%c",str[i]);
        }
    }
}

