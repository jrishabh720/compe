#include<bits/stdc++.h>
#include<algorithm>

typedef long long int ll;
typedef unsigned long long int ull;
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define bs binary_search
#define full(a) a.begin(),a.end()
#define fir first
#define sec second
#define mem(a,x) memset(a,x,sizeof(a))
#define test int t;cin>>t; while(t--)
#define MOD 1000000007
#define ff(n) for(ll i=0;i<n;i++)
#define rf(n) for(ll i=n-1;i>=0;i--)
#define dff(n,m) for(ll i=0;i<n;i++) for(ll j=0;j<m;j++)
using namespace std;

ll gcd(ll a,ll b)
{
	if(a==0)
	return b;
	else
	return gcd(b%a,a);
}
ll findgcd(unordered_set<ll> s)
{
    unordered_set<ll> :: iterator it4=s.begin();
	ll  result= *it4;
	if(s.size()>1)
	{
		it4++;
	    for(;it4!=s.end();it4++)
	            result = gcd(result,*it4);
	}
    return result;
}

int main() {
    fast;
    test
    {
        ll n,input,ans=-1; cin >> n;
		unordered_set<ll> s1,s2;
		for(ll i=0;i<n;i++)
		{
			cin >> input;
			s1.insert(input);
			s2.insert(input);
		}
		unordered_set<ll> :: iterator it1=s1.begin(),it2;
		if(s1.size()<2)
        {
           (n>1)?cout << (*it1)+(*it1) <<endl : cout << (*it1) <<endl;
        }
		else
        {
            ll max1 =0;
            ll max2=0;
            for(;it1!=s1.end();it1++)
            {
                if(*it1>max1)
                    max1=*it1;
            }
            for(it2=s1.begin();it2!=s1.end();it2++)
            {
                if(*it2>max2 && *it2<max1)
                    max2=*it2;
            }
            cout << max1 << max2 <<endl;
            if(max1!=max2){
                s2.erase(max1);
                ll b = findgcd(s2);
                ll ans1 = max1+b;
                s2.insert(max1);
                s2.erase(max2);
                ll ans2 = max2+findgcd(s2);
                cout << b << ans1 <<ans2 <<endl;
                (ans1>=ans2)?ans = ans1 : ans = ans2;
            }
            cout << ans << endl;
		}
    }
	return 0;
}

