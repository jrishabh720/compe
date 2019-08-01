// PJ
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
    	long long N;
    	cin>>N;
    	
    	long long setbitcount=0;
		while(N > 0){
			if(N & 1){
				setbitcount++;
			}
			N>>=1;
		}
		cout<<setbitcount<<endl;
    	
	}
    
    
    
    return 0;
}

