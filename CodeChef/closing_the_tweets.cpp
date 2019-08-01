// PJ
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin>>n>>k;
    
    int arr[n+1] = {0};
    
    while(k--){
    	string str;
    	cin>>str;
    	int ch;
    	if(str=="CLICK"){
		 	cin>>ch;
		 	arr[ch] ^= 1;
		 }
    	else{
    		for(int i=1; i<=n; i++)
		 	    arr[i] = 0;
		 }
		 
//		 for(int i=1; i<=n; i++){
//		 	cout<<arr[i]<<" ";
//		 }
		 int sum = 0;
		 for(int i=1; i<=n; i++){
		 	sum += arr[i];
		 }
		 cout<<sum<<endl;
		 
	}
    
    
    return 0;
}

