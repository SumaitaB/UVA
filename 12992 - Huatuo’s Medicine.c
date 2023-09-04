#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,i,t;
    scanf("%lld",&t);
   for(i=1;i<=t;i++)
    {
        scanf("%lld",&a);
        printf("Case #%lld: %lld\n",i,2*a-1);
    }
    return 0;
}

