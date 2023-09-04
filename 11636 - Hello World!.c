#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,i,x,count=0,p=1;
    for(x=1;; x++)
    {
        if(x==2000)break;
        count=0;
        scanf("%lld",&n);
        if(n<0)break;
        p=1;
        if(n==1)
        {
            printf("Case %lld: 0\n",x);
        }
        else
        {
            for(i=0; i<n; i++)
            {
                p=p*2;
                count++;
                if(p>=n)break;

            }
            printf("Case %lld: %lld\n",x,count);
        }
    }
    return 0;
}
