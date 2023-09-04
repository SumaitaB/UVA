#include<string.h>
#include<stdio.h>
int main()
{
    long long int i,t,a[10000]= {0},count=0,x,y,p,q;
    while(scanf("%lld%lld",&x,&y)!=EOF)
    {
        count=0;
        if(x==0&&y==0)break;

        for(i=1; i<=x; i++)
        {
            scanf("%lld",&p);
            a[p]=1;
            printf("p= %lld\n",a[p]);
        }
        for(i=1; i<=y; i++)
        {
            scanf("%lld ",&q);
            printf("q =%lld\n",a[q]);
            if(a[q]==1);
            {
                count++;
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}

