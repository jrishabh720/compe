#include<iostream>
using namespace std;
int main()
{
  int t,n,p,q,r;
  cin>>t;
  while(t--)
  {
   int c=0;
   cin>>n>>p>>q>>r;
   for(int j=1;j<=n;j++){
        if((j%p == 0 && j%q != 0 && j%r != 0) || 
                (j%p != 0 && j%q == 0 && j%r != 0) || 
                    (j%p != 0 && j%q != 0 && j%r == 0))
        c++;
	}
     cout<<c<<endl;
    }
    return 0;
}
