#include<bits/stdc++.h>

typedef long double ll;
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll arr[n];
		ll sum = 0;
		for(int i=0; i<n; i++){
			cin>>arr[i];
			sum+=arr[i];
		}
		
		ll mean = sum/n;
//		cout<<"mean: "<<mean<<endl;
		int flag = 0;
		int coin = -1;
		ll tempSum;
		ll tempMean;
		for(int i=0; i<n; i++){
			tempSum = sum-arr[i];
//			cout<<tempSum<<" ";
			tempMean = tempSum/(n-1);
//			cout<<tempMean<<" ";
			if(tempMean==mean){
				flag = 1;
				coin = i+1;
				break;
			}
		}
		if(flag){
			cout<<coin<<endl;
		}
		else{
			cout<<"Impossible"<<endl;
		}
	}
}

