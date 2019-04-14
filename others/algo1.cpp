#include <iostream> 
#include <algorithm>

using namespace std;

int main()
{
    int flag = 0;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int* m;
    m = max_element(arr, arr+n);
    
    for(int i=2; i<*m; i++)
    {
        for(int j=1;j<n; j++)
        {
            if((arr[j] % i) != (arr[j-1]%i))
            {
                flag = 1;
            }
        }
        if(flag == 0)
        {
            cout<<i<<" ";
        }
    }
    
}

