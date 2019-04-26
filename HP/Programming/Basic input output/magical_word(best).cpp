#include<iostream>
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n, t ;
    int prime[12] = {67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113} ;
    string s;
    cin>>t ;
    while(t--){
        cin>>n ;
        cin>>s ;
        for(int i=0; i<n; i++){
            int ascii = int(s[i]) ;
            for(int k=0; k<12; k++){
                if(prime[k]<ascii && ascii<prime[k+1]){
                    if( (prime[k+1]-ascii)>(ascii - prime[k]) || (prime[k+1]-ascii)==(ascii - prime[k])){
                        s[i] = prime[k] ;
                        break ;
                    }
                    else {
                        s[i] = prime[k+1] ;
                        break ;
                    }
                }
            }
            if(ascii<prime[0]) {
                s[i] = prime[0] ;
            }
            if(ascii>prime[11]) {
                s[i] = prime[11] ;
            }
        }
        cout<<s<<"\n" ;
    }
}
