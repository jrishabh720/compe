#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {   
            string str;
            cin>>str;
            sort(str.begin(),str.end());
            
            int k=str.length();
            int flag=0;
            for(int j=1;j<k;j++)
            {
                if(str[j]!=(str[j-1]+1))
               {flag=1;
                   break;
               }
            }
            
            
            if(flag==1)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
            
            
    }
    return 0;
}
