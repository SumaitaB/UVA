#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    long long int t,i,n;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&n);
        n=(n*(n+1))/2;
        if(n%3==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
