#include<stdio.h>
#include<string.h>
int main()
{
    long long int t,i,j,x,c=0,r=1;
    char a[100];
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        c=0;
        scanf("%s",&a);
        x=strlen(a);
        r=1;
        for(j=0; j<x; j++)
        {
           if(a[j]=='O')
           {
               c+=r;
               r++;
           }
           else
           {
               r=1;
           }
        }
        printf("%lld\n",c);
    }
    return 0;
}
