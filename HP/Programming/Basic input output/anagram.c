#include<stdio.h>
#include<string.h>



int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    	int i,j;
        int count = 0;
        char str1[10000];
        char str2[10000];
        scanf("%s",str1);
        scanf("%s",str2);
        
        int l1 = strlen(str1);
        int l2 = strlen(str2);

        
       for(i=0; i<l1; i++)
        {
            for(j=0; j<l2; j++)
            {
                if(str1[i] == str2[j])
                {
                    ++count;
                    str2[j]='0';
                    break;
                }
                
            }
    
        }
        
        int l = l1 + l2 - (2*count);
        printf("%d",l);
        printf("\n");
    }

}
