#include<iostream>
#include<stdio.h>

int main()
{

    int a[100001],q,n,m,z,b[15],i,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&q);

           a[q]++;
    }
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&m);
        if(a[m]>0)
        printf("%d\n",a[m]);
        else
        printf("NOT PRESENT\n");
    }


    return 0;
}
