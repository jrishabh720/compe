#include<iostream>
#include<map>
using namespace std;
int main(){
	int n,m=0;
	cin>>n;
	long a,f;
	map<long,int> p;
	while(n--){
		cin>>a;
		p[a]++;
		if(p[a]>m){
			m=p[a];
			f=a;
		}
		else if(p[a]==m){
			f=min(f,a);
		}
	}
	cout<<f<<endl;
}
