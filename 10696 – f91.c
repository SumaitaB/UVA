#include <stdio.h>
int main()
{  long long int n;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)break;
        if(n <=100)
        {
            printf("f91(%lld) = 91\n",n);
        }
        else
        {
        printf("f91(%lld) = %lld\n",n,n-10);
        }
    }
    return 0;
}
