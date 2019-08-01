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
    	int Z,N;
    	cin>>Z>>N;
    	int arr[N];
    	for(int i=0; i<N; i++){
    		cin>>arr[i];
		}
		int res = 0;
		int flag = 0;
		res = Z&a[0]
		for(int i=1; i<N; i++){
			
			if(res==0){
			   flag=1;
			   break;				
			}
			res &=arr[i];
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

