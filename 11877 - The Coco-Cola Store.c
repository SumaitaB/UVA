#include<stdio.h>
int main()
{
    long long int n,sum=0;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)break;
        sum=0;
        while(n>=3)
        {

            sum+=n/3;
            n=(n/3)+(n%3);
        }
        if(n == 2)
        {
            sum++;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
