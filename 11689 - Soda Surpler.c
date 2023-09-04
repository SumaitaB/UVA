#include<stdio.h>
int main()
{
    long long int t,i,e,f,c,total=0,n;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld%lld%lld",&e,&f,&c);
        n=e+f;
        total=0;
       while(n>=c)
        {
            total+=n/c;
            n=(n/c)+(n%c);
        }
        printf("%lld\n",total);
    }
    return 0;
}
