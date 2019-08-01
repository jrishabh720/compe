#include<iostream>

using namespace std;


int find2(int x, int y, int* arr)
{
	if(x=0 && y==0)
		return arr[0];
	else if(x==0 && y==1)
		return arr[1];
	else if(x==1 && y==0)
		return arr[2];
	else if(x==1 && y==1)
	    return arr[3]; 
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int arr[4];
		
		for(int i=0; i<4; i++)
		{
			cin>>arr[i];
		}
		int count = 0;
		for(int i=0; i<=1; i++)
			{
				for(int j=0; j<=1; j++)
				{
					for(int k=0; k<=1; k++)
					{
						int res1 = find2(find2(i,j,arr),k, arr);
						int res2 = find2(i,find2(j,k,arr), arr);
						if(res1 == res2)
					    {
					        ++count; 
					    }
					}
					
				}
				
			}
		if(count == 8)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}

//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//int table[4];
//int func(int a,int b){
//    if(a==0 && b==0 ){
//        return table[0];
//    }else if(a==0 && b==1){
//        return table[1];
//    }else if(a==1 && b==0){
//        return table[2];
//    }
//    return table[3];
//}
// 
//bool bin_op(){
//    int i,j,k;
//    for(i=0;i<=1;i++){
//        for(j=0;j<=1;j++){
//            for(k=0;k<=1;k++){
//                if(func(func(i,j),k) != func(i,func(j,k)))
//                {
//                    return false;
//                }
//            }
//        }
//    }
//    return true;
//}
// 
// 
//int main()
//{
// 
//    int t,i;
//    cin>>t;
// 
//    while(t--)
//    {
//        for(i=0;i<4;i++){
//            cin>>table[i];
//        }
// 
//        if(bin_op()){
//            cout<<"Yes"<<endl;
//        }else{
//            cout<<"No"<<endl;
//        }
// 
//    }
// 
//    return 0;
//}
