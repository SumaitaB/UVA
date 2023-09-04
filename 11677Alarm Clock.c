
#include<stdio.h>

int main()
{
    long long int a,n,p;
    while(scanf("%lld",&n)!=EOF)
    {
        a=(n*(n+2))/2;
        a=a*3-6;
        printf("%lld",a);
    }
    return 0;
}
