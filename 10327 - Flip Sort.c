#include<stdio.h>
#include<math.h>
int main()
{
    long long int i,n,a[10005],count=0,j;
    while(scanf("%lld",&n)!=EOF)
    {
        count=0;
        for(i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i]>a[j])
                {
                    count++;
                }
            }
        }
        printf("Minimum exchange operations : %lld\n",count);
    }
    return 0;
}
