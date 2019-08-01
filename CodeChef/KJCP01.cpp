#include<iostream>
#include<bits/stdc++.h>

using namespace std;
struct num{
    int val, id, count;
    num(int val, int id, int count){
        id = id;
        val = val;
        count = count;
    }
};

bool operator < (num a, num b){
    if(a.count == b.count){
        return a.id < b.id;
        
    }
    else{
    	return a.count > b.count;
    	
	}
    
}


int main(){
        int n,c;
        cin>>n>>c;
        map<int, pair<int,int> > mymap;
        map<int, pair<int,int> > :: iterator it;
        int temp;
        for(int i=0; i<n; i++){
            cin>>temp;
            it = mymap.find(temp);
            if(it == mymap.end()){
                mymap[temp] = make_pair(i,1);
            }
            else{
                it->second.second++;
            }
            
        }
        vector<num> v;
        for(it=mymap.begin(); it!=mymap.end();it++) {
 //       	    cout<<it->first<<"  "<<it->second.first<<" "<<it->second.second<<endl;
                v.push_back(num(it->first,it->second.first,it->second.second));
        }
//        cout<<v.size()<<endl;
        
        sort(v.begin(), v.end());
//        for(vector <num> :: iterator vec_it=v.begin(); vec_it!=v.end();vec_it++){
//        	cout<<vec_it->val<<" "<<vec_it->id<<" "<<vec_it->count<<endl;
//		}
        for(vector <num>::iterator vec_it=v.begin();vec_it!=v.end();it++) {
                for(int i=0;i<(vec_it->count);i++) {
                        cout<<(vec_it->val)<<" ";
                }
        
        
}
