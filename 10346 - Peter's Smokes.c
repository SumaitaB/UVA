#include<stdio.h>
int main()
{
    long long int n,k,total;
    while(scanf("%lld%lld",&n,&k)!=EOF)
    {
        total=n;

        while(n>=k)
        {
            total=total+(n/k);
            n=(n/k)+(n%k);
        }
        printf("%lld\n",total);
    }
return 0;
}
