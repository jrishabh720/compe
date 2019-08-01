#include<bits/stdc++.h>

using namespace std;


bool countOne(long long x){
	long count = 0;
	while(x>0){
		if(x&1){
			count++;
		}
		x>>=1;
	}
	if(count%2 == 0){
		return true;
	}
	else {
		return false;
	} 
}
int main(){

	int test;
	cin>>test;
	while(test--){
		set<long long> s;
	    set<long long> :: iterator it;
	    set<long long> :: iterator pos;
	    
		int q;
		cin>>q;
		while(q--){
			long long oddCount = 0;
			long long evenCount = 0; 
			long long size1;
			long long size2;
			long long x;
			cin>>x;
			
			size1 = s.size();
			cout<<"Size: "<<size1<<endl;
			if(size1==0){
				s.insert(x);
				if(countOne(x)){
					evenCount++;
				}
				else {
					oddCount++;
				}
			}
			else{
				pos = s.find(x);
			
				if(*pos >= size1){
					s.insert(x);
					if(countOne(x)){
						evenCount++;
					}
					else {
						oddCount++;
					}	
			    }	
			}
		
			long long size3 = s.size();
		
			for(it=s.begin(); size3!=0; it++){
				
				long long temp;
				if(*it != x){
					temp = *it ^ x;
					size2 = s.size();
					pos = s.find(temp); 
					if(*pos >= size2 ){
						s.insert(temp);
						if(countOne(temp)){
							evenCount++;
						}
						else{
							oddCount++;
						}
					}
				}
				size3--;
				cout<<*it<<" ";
			}
			cout<<evenCount<<" "<<oddCount<<endl;
			
		}
	}
}
