#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test>0)
    {
        int numPair;
        cin>>numPair;
        char pair[numPair+1];
        int flag =0;
        cin>>pair;
        for(int i=0; i<numPair; i++)
        {

              if(pair[i] == 'A')
              {
              	pair[i] = 'T';
			  }
			  else if(pair[i] == 'T')
			       {
			            pair[i]= 'A';
				   }
				   else if(pair[i] == 'G')
				        {
				   	        pair[i] = 'C';
				   	
				        }
				        else if(pair[i] == 'C')
						    {
						   	    pair[i] = 'G';
						    }
				            else
				            {
				   	            flag = 1;
				            }
	
        }
        
        if (flag == 0)
        {
            cout<<pair<<endl;
        } 
        else
        {
            cout<<"Error RNA nucleobases found!"<<endl;
            
        }
        test--;
    }
    
}

