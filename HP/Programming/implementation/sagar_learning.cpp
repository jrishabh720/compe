//#include<iostream>
//#include<algorithm>
//#include<map>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		int n;
//		cin>>n;
//		vector<vector<int> > vec;
//		if(n<3)
//		{
//			cout<<"-1"<<endl;
//		}
//	    else
//    	{
//	
//	   
////		{
////			for(long i=1; i<=n-2; i++){
////				long mid1 = __gcd((i+2), (i+1));
////				long mid2 = __gcd(mid1,i);
////				arr[i-1] = mid2;
////		
////	      	}
////	      	sort(arr, arr+n-2);
////	      	for(long p=0; p<n-2;p++)
////	      	{
////	      		cout<<arr[p]<<" ";
////			  }
////	      	cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
////		}   
//            int i=1;
//            int upto = 3;
//			for(i; upto<=n; i++)
//			{
//				
//				vec[i].push_back(i);
//				vec[i].push_back(i*2);
//				vec[i].push_back(i*3);
//				
//				upto = (i+1)*3;
//				
//			}
//			int size = vec.size();
//			cout<<size;
////			vector<int, vector<int> > :: iterator vec_it; 
////			for(vec_it= vec[size-1].begin(); it != vec[size-1].end();  it++)
////			{
////				cout<<*it<<" ";
////			}
////            for(int j=0; j<vec[size].size(); j++)
////            {
////            	cout<<vec[size][j]<<" ";
////			}
////			cout<<endl;
//		}
//	}
//	
//}

#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n;
		cin>>n;
		long x = n/3;
		if(x==0)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			cout<<x<<" "<<2*x<<" "<<3*x<<endl;
		}
		
	}
}
