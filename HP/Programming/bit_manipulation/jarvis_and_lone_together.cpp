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
    	int N;
    	cin>>N;
    	long long arr[N];
    	for(int i=0; i<N; i++){
    	cin>>arr[i];
		}
		long long res = 0;
		for(int i=0; i<N; i++){
			res ^= arr[i];
		}
		if(res){
			cout<<res<<endl;
		}
		else{
			cout<<"-1"<<endl;
		}
		
	}
    
    
    return 0;
}

