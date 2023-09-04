#include<stdio.h>
int main()
{
    long long int t,i,count=0,a[7];
    while(scanf("%lld",&t)==1)
    {
        count=0;
        for(i=0; i<5; i++)
        {
            scanf("%lld",&a[i]);
            if(a[i]==t)
            {
                count++;
            }
        }

        printf("%lld\n",count);
    }
    return 0;
}
