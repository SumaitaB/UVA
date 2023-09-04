#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long long int n,a[10005],price,t,i,j,k,d=9999999,x=0,y=0,temp;
    while(scanf("%lld",&n)!=EOF)
    {

        d=9999999;
        x=0,y=0;
        for(i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
        }
        scanf("%lld",&price);
        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i]+a[j]==price)
                {
                    if(a[i]>a[j])
                    {
                        if(d>(a[i]-a[j]))
                        {
                            x=a[j];
                            y=a[i];
                            d=a[i]-a[j];
                        }
                    }
                    else
                    {
                        if(d>(a[i]-a[j]))
                        {
                            x=a[i];
                            y=a[j];
                            d=a[j]-a[i];
                        }
                    }

                }
            }
        }
        printf("Peter should buy books whose prices are %lld and %lld.\n",x,y);
        printf("\n");
    }
    return 0;
}
