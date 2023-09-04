#include<stdio.h>
int main()
{
    long long int a[200],i,j,n,age,count;
    while(1)
    {
        scanf("%lld",&n);
        if(n==0)break;
        count=n;
        for(i=0; i<200; i++)
        {
            a[i]=0;
        }
        for(i=0; i<n; i++)
        {
            scanf("%lld",&age);
            a[age]++;
        }
        for(i=0; i<200; i++)
        {
            if(a[i]>0)
            {
                for(j=1; j<=a[i]; j++)
                {
                    printf("%lld",i);
                    if(count>1)
                    {
                        while(1)
                        {
                            printf(" ");
                            count--;
                            break;
                        }
                    }

                }
            }
        }
        printf("\n");

    }
    return 0;
}
