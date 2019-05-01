//#include<iostream>
//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false); 
//    cin.tie(NULL); 
//    long t;
//	cin>>t;
//	while(t--)
//	{
//		long n;
//		cin>>n;
//		long arr[n];
//		for(long i=0; i<n; i++)
//		{
//			cin>>arr[i];
//			
//		}
//			
//		long sum = 0;
//		for(long i=0; i<n; i++)
//		{
//			for(long j=i+1; j<n; j++)
//			{
//				long s = abs(arr[i]-arr[j]) + j-i; 
//				if(s>sum)
//				{
//					sum=s;
//				}
//				
//			}
//		}	
//		cout<<sum<<endl;
//	}
//}


#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false); 
cin.tie(NULL);

int t; cin >> t;
while (t--) {
int n; cin >> n;
int a[n];
int max1 = INT_MIN, max2 = INT_MIN, min1 = INT_MAX, min2 = INT_MAX;
for (int i = 0; i < n; ++i) {
cin >> a[i];
if (a[i]+i > max1) {
max1 = a[i]+i;

}
cout<<i<<" max1 = "<<max1<<" ";
if (a[i]+i < min1) {
min1 = a[i]+i;

}
cout<<i<<" min1 = "<<min1<<" ";
if (a[i]-i > max2) {
max2 = a[i]-i;

}
cout<<i<<" max2 = "<<max2<<" ";
if (a[i]-i < min2) {
min2 = a[i]-i;

}
cout<<i<<" min2 = "<<min2<<" ";
cout<<endl;
}
cout << max(max1-min1, max2-min2) <<"\n";
}

return 0;
}
