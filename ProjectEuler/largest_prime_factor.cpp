// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

//#include<iostream>
//#include<cmath>
//#include<bits/stdc++.h>
//
//using namespace std;
//
////prime checker
//bool isPrime(long long n)
//{
//    int flag = 0;
//    for(long long i=2; i<sqrt(n); i=i+2)
//    {
//        if(n%i == 0)
//        {
//            flag = 1;
//        }
//    }
//    if(flag == 0)
//        return true;
//    else
//        return false;
//}
//
//int main()
//{
//    long long maxi = 0;
//    long long n;
//    cin>>n;
//
//    for(long long j=0 ; j<n/2; j++)
//    {
//        if(n%j== 0 && isPrime(j))
//        {
//            if(j>maxi)
//            {
//                maxi = j;
//            }
//        }
//    }
//
//   cout<<maxi;
//
//}

// C++ Program to find largest prime 
// factor of number 
#include <iostream> 
#include<bits/stdc++.h> 
using namespace std; 

// A function to find largest prime factor 
long long maxPrimeFactors(long long n) 
{ 
	// Initialize the maximum prime factor 
	// variable with the lowest one 
	long long maxPrime = -1; 

	// Print the number of 2s that divide n 
	while (n % 2 == 0) { 
		maxPrime = 2; 
		n >>= 1; // equivalent to n /= 2 
	} 

	// n must be odd at this point, thus skip 
	// the even numbers and iterate only for 
	// odd integers 
	for (int i = 3; i <= sqrt(n); i += 2) { 
		while (n % i == 0) { 
			maxPrime = i; 
			n = n / i; 
		} 
	} 

	// This condition is to handle the case 
	// when n is a prime number greater than 2 
	if (n > 2) 
		maxPrime = n; 

	return maxPrime; 
} 

// Driver program to test above function 
int main() 
{
	long long n;

	cin>>n;
	cout << maxPrimeFactors(n); 

} 
// This code is contributed by Shivi_Aggarwal 

