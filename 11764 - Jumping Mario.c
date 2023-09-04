#include<stdio.h>
int main()
{
    long long int t,i,n,wall[70],hi=0,low=0,j;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        hi=0;
        low=0;
        scanf("%lld",&n);
        for(j=0; j<n; j++)
        {
            scanf("%lld",&wall[j]);
        }
        for(j=0; j<n-1; j++)
        {
            if(wall[j]>wall[j+1])
            {
                low++;
            }
            else if(wall[j]<wall[j+1])
            {
                hi++;
            }
        }
        printf("Case %lld: %lld %lld\n",i,hi,low);
    }
    return 0;
}
