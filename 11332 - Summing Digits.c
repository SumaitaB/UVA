#include<stdio.h>
int main()
{
    long long int n,p,r=0,s=0;
    while(1)
    {
         scanf("%lld",&n);
        if(n==0)break;
        p=n;
        while(1)
        {
            s=0;
            while(p!=0)
            {
                r=p%10;
                s=s+r;
                p=p/10;
            }
            p=s;
            if(s/10==0)break;
        }
        printf("%lld\n",s);
    }
    return 0;
}
