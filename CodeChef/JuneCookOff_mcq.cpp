// PJ
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		string str1;
		string str2;
		cin>>str1;
		cin>>str2;
		int count = 0;
		int i=0;
	
		while(i<n)
		{
			if(str1[i] == str2[i])
			{
				count++;
				i++;
			}
			else if(str2[i] == 'N')
				{
					i++;
				}
				else if(str1[i] != str2[i]){
					i = i+2;
				}
			
		}
		cout<<count<<endl;
		
		
	}    
    
    return 0;
}

