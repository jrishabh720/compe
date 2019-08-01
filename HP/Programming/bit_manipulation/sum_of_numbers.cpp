// PJ
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    while(test--){
    	int n;
    	cin>>n;
    	long long arr[n];
    	for(int i=0; i<n; i++){
    		cin>>arr[i];
		}
		long long S;
		cin>>S;
		int flag =0;
		long long maxi = LLONG_MIN;
		for(int i=0; i<(1<<n); i++){
			long long sum = 0;
			for(int j=0; j<n; j++){
				if(i&(1<<j)){
					sum+=arr[j];
				}
				
			}
			if(sum == S){
				flag = 1;
				break;
			}
			if(flag){
				break;
			}
		}
		if(flag){
			cout<<"Yes"<<endl;
			
		}
		else{
			cout<<"No"<<endl;
		}
	}
    
    
    return 0;
}

