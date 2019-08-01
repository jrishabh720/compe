#include <bits/stdc++.h>
using namespace std;
int A[3] = { 0 };
void print(int arr[], int n){
	for(int i=0; i<n; i++){
		cout<<A[i];
	}
	cout<<"\n";
}
void kstring( int n, int k){
	if(n<1){
		print(A,3);
	}
	else{
		for(int j=0; j<k; j++){
			A[n-1] = j;
			kstring(n-1,k);
		}
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 3;
    int k = 3;

//    string A;
//    A = "0198";
//    A[3] = '9';
//    cout<<A;
    kstring(n,k);
    
    return 0;
}

