#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long long int t,n,i,j,k,a[30005],s=0,d=0,avg,temp;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        s=0;
        d=0;
        scanf("%lld",&n);
        for(j=1; j<=n; j++)
        {
            scanf("%lld",&a[j]);
        }
        for(k=1; k<=n-1; k++)
        {
            for(j=k+1; j<=n; j++)
            {
                if(a[k]>a[j])
                {
                    temp=a[k];
                    a[k]=a[j];
                    a[j]=temp;
                }
            }
        }
        if(n%2==0)
        {
            avg=n/2;
        }
        else
        {
            avg=(n+1)/2;
        }
        for(j=1;j<=n;j++)
        {
            d=abs(a[avg]-a[j]);
            s=s+d;
        }
          printf("%lld\n",s);
    }
    return 0;
}
