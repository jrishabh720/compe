#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int flag = 0;
        int n;
        cin>>n;
        int arr[n];
        int arr1[5] ={0};
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int max = -1000;
        for(int i=n-1; i>=0 ; i--)
        {
        	if(arr[i] == 0)
        	{
        		continue;
        		
			}
            else if(max < arr[i])
            {
                max = arr[i];
                arr1[0]= max;
            }
            for(int j=0; j<n; j++)
            {
                if(j==(i+1) || j==(i-1) || (j==i) || arr[j] == 0)
                {
                    continue;
                }
                if(max < (arr[i]+arr[j]))
                { 
                    max = arr[i] + arr[j];
                    arr1[0] = max;
                    arr1[1] = arr[i];
                    arr1[2] = i;
                    arr1[3] = arr[j];
					arr1[4] = j;
                } 
				else if (max == (arr[i]+arr[j]))
				{
					if(arr[i]>arr1[1] && i<arr1[2] && j<arr1[4]) 
					{
						arr1[1] = arr[i];
						arr1[2] = i;
						arr1[3] = arr[j];
						arr1[4] = j;
					}
					
				} 
     //           cout<<i<<"."<<j<<".."<<arr1[0]<<"..."<<arr1[1]<<"...."<<arr1[3]<<"? ";
            }
      //      cout<<endl;
                
        }
        for(int i=0; i<n; i++)
        {
        	if(arr[i] == arr1[0])
        	{
        		flag = 1;
        		break;
			}
		}
        if(flag)
        {
            cout<<arr1[0]<<endl;
        }
        else
        {
            cout<<arr1[1]<<arr1[3]<<endl;
        }
            
    }
}

//5
//5
//-1 7 8 -5 4 
//4
//3 2 1 -1 
//4
//11 12 -2 -1 
//4
//4 5 4 3 
//4
//5 10 4 -1





