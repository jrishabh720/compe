// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

#include<iostream>
#include<cmath>

using namespace std;

//prime checker
bool isPrime(long long n)
{
    int flag = 0;
    for(long long i=2; i<pow(n,0.5); i++)
    {
        if(n%i == 0)
        {
            flag = 1;
        }
    }
    if(flag == 0)
        return true;
    else
        return false;
}

int main()
{
    long long maxi = 0;
    long long n;
    cin>>n;
    bool b = isPrime(n);
    cout<<b<<endl;

/*    for(long long j=0 ; j<n/2; j++)
    {
        if(n%j== 0 && isPrime(j))
        {
            if(j>maxi)
            {
                maxi = j;
            }
        }
    }
*/
//   cout<<maxi;

}
