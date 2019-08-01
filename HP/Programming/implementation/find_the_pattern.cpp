#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
long long unsigned int i,n,a[10000];
cin>>n;
for( i=0;i<n;++i)
{
cin>>a[i];
}
sort(a,a+n);
cout<<a[0]+a[n-1];
}
