// PJ
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    while(test--)
    {
    	int n,m;
    	
    	vector<int> arr;
    	arr[0] = 0;
    	arr[1] = 1;
    	arr[2] = 2;
    	arr[3] = 3;
    	vector<int> vec;
    	
    	cin>>n>>m; 
    	
    	
		ll count = 0;
		vector<int> :: iterator it;
		for(int j=1; j<=n; j++)
		{
			ll d;
			ll f;
			ll b;
			cin>>d>>f>>b;
			if(arr[d]!=0)
			{
				count += f;
				arr[d]--;
				vec.push_back(d);
			}
			else{
				count+=b;
				
                it = max_element(arr.begin(), arr.end());
				it = find (arr.begin(), arr.end(), *it);
				arr[*it]--;
				vec.push_back(*it); 
			}
		}
		cout<<count<<endl;
		for(it=vec.begin(); it!=vec.end(); it++)
		{
			cout<<*it<<" ";
		}
		cout<<endl;
		
	}
    
    return 0;
}

