#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
int t,i,b,j;char str[202];
scanf("%d",&t);
getchar();
for(i=0;i<=t-1;i++)
{
gets(str);
b=strlen(str);
for(j=0;j<=b-1;j++)
{
if(str[j]==32)
{
printf("$");
}
else if(str[j]>=97)
{
printf("%d",str[j]-96);
}
else if(str[j]>=65)
{
printf("%d",str[j]-64);
}
}
printf("\n");
}
return 0;
}
