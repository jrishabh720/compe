// PJ
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
int countSetBits(int N) {
	long long setbitcount=0;
		while(N > 0){
			if(N & 1){
				setbitcount++;
			}
			N>>=1;
		}
		return setbitcount;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	int arr[n];
    	unordered_map<int,int> m;
    	for(int i=0; i<n; i++){
    		cin>>arr[i];
    		m.insert(make_pair(arr[i],countSetBits(arr[i])));
		}
		
		unordered_map<int,int> :: iterator it;
		for(it=m.begin(); it != m.end(); it++){
			cout<<it->first<<it->second;
			cout<<"\n";
		}
		
	}
    return 0;
}

