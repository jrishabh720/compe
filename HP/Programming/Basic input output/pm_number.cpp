#include<iostream>

using namespace std;

//int isPrime(int n) 
//{ 
//	
//	if (n <= 1) 
//		return 0; 
//
//	for (int i = 2; i <; i++) 
//		if (n % i == 0) 
//			return 0; 
//
//	return 1;
//}
bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
} 
int main()
{
	int l,r;
	cin>>l>>r;
	for(int i=l; i<=r; i++)
	{
		if(isPrime(i))
		{
			int n = i;
			int t=0;
			int sum = 0;
			while(n>0)
			{
				t = n%10;
				sum += t;
				n=n/10;
				
			}
			if(isPrime(sum))
			{
				cout<<i<<" ";
			}
		}
	}
}
