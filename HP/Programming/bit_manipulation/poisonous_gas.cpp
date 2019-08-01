// PJ
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n--){
    	int t;
    	cin>>t;
    	long long arr[t];
    	long long sum =0;
    	for(int i=0; i<t; i++){
    		cin>>arr[i];
    		sum+= arr[i];
		}
		long long setbitcount=0;
		while(sum > 0){
			if(sum & 1){
				setbitcount++;
			}
			sum>>=1;
		}
		if(setbitcount==1){
			cout<<"Yes"<<endl;
			
		}
		else{
			cout<<"No"<<endl;
		}
		
		
	}
    
    return 0;
}

