#include<bits/stdc++.h>

using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int length;
        cin>>length;
        string str;
        cin>>str;
        int sum_p = 0;
        for(int i=0; i<length; i++){
            if(str[i] == 'P'){
                sum_p++;
            }
        }
        int req_sum = ceil(length*0.75 - sum_p);
        
        int j = 0;
        int flag = 0;
        for(int i=2; i<length-2; i++){
            if(str[i]=='P'){
                continue;
            }
            else{
                if((str[i-1] == 'P' || str[i-2] == 'P') & (str[i+1]=='P' || str[i+2]== 'P')){
                j++;
                }
                if(j==req_sum){
                    flag = 1;
                    break;
                }
                
            }
            
            
        }
        if(flag){
            cout<<req_sum<<endl;
        }
        else if(req_sum == 0){
            cout<<"0"<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        
    }
}
