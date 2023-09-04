#include<stdio.h>
int main()
{
    long long int t,i,j,n,a[10000],max=-99999;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        max=-99999;
        scanf("%lld",&n);
        for(j=0; j<n; j++)
        {
            scanf("%lld",&a[j]);
        }
         for(j=0; j<n; j++)
        {
           if(max<a[j])
           {
               max=a[j];
           }
        }
        printf("Case %lld: %lld\n",i,max);

    }
    return 0;
}
