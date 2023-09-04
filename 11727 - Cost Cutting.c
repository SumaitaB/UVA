#include<stdio.h>
int main()
{
    long long int t,i,max=-9999,min=9999999,j,a[5];
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        max=-9999,min=9999999;
        for(j=0; j<3; j++)
        {
            scanf("%lld",&a[j]);
        }
        for(j=0; j<3; j++)
        {
            if(max<a[j])
            {
                max=a[j];

            }
            if(min>a[j])
            {
                min=a[j];
            }
        }
        for(j=0; j<3; j++)
        {
            if(a[j]!=min&&a[j]!=max)
            {
                printf("Case %lld: %lld\n",i,a[j]);
            }
        }
    }
    return 0;
}
