#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		typedef pair<char,int> pair1;
		typedef pair<int,char> pair2;
		unordered_set<pair1> map1;
		unordered_set<pair2> map2;
		string str,str1;
	    cin>>str>>str1;

		int length = str1.length();

		for(int i=0; i<26; i++){
			map1[str[i]] = i;
		}
		for(int j=0; j<length; j++){
			int index = map1[str1[j]];
			map2.insert(make_pair(index, str1[j]));
		}

		unordered_set<pair2> :: iterator it;
		for(it=map2.begin(); it!=map2.end(); it++){
			cout<<it->second;
		}
		cout<<endl;
	}


}
