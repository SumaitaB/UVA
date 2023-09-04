#include<stdio.h>
int main()
{
    long long int n,i,sum=0,d=0,j;
    printf("PERFECTION OUTPUT\n");
    for(j=1;;j++)
    {
        scanf("%lld",&n);
        if(n==0)break;
        sum=0;
        for(i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                d=n/i;
                if(d!=i)
                {
                    sum+=d+i;
                }
                else if(i==d)
                {
                    sum=sum+d;
                }
            }
        }
        if((sum-n)==n)
        {
        printf("%5lld  PERFECT\n",n);
        }
        else if((sum-n)>n)
        {
        printf("%5lld  ABUNDANT\n",n);
        }
         else if((sum-n)<n)
        {
        printf("%5lld  DEFICIENT\n",n);
        }
    }
    printf("END OF OUTPUT\n");
    return 0;
}
