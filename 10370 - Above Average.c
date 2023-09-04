#include<stdio.h>
int main()
{
    long long int t,i,n,a[1010],sum=0,count=0,j;
    double avg,above;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        sum=0;
        count=0;
        avg=0;
        scanf("%lld",&n);
        for(j=0; j<n; j++)
        {
            scanf("%lld",&a[j]);
            sum+=a[j];
        }
        avg=sum/(n*1.00);
        for(j=0;j<n;j++)
        {
            if(a[j]>avg)
            {
                count++;
            }
        }
        above=(count/(n*1.00))*100;
        printf("%.3lf%%\n",above);
    }
    return 0;
}
