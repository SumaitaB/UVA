#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long long int t,i,j,n,x,y,p,ans=0;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&n);
        p=n;
        x=(-1+(sqrt(1-(4*1*(-2*p)))))/(2*1);
        y=(-1-(sqrt(1-(4*1*(-2*p)))))/(2*1);
        if(x>0)
        {
            ans=x;
        }
        else if(y>0)
        {
            ans=y;
        }
        printf("%lld\n",ans);
    }

    return 0;
}

