#include<stdio.h>
#include<string.h>
int main()
{
    long long int t,i,hi[10005],lo[10005],p,d,q,j,s,cnt=0,prnt=0;
    char a[10005][30];
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&d);
        for(j=0; j<d; j++)
        {
            scanf("%s%lld%lld",&a[j],&lo[j],&hi[j]);

        }
        scanf("%lld",&q);
        for(j=0; j<q; j++)
        {
            cnt=0;
            scanf("%lld",&p);
            for(s=0; s<d; s++)
            {
                if(p>=lo[s]&&p<=hi[s])
                {
                    cnt++;
                    prnt=s;
                }
                if(cnt>1)break;
            }
            if(cnt==1)
            {
                printf("%s\n",a[prnt]);
            }
            else
            {
                printf("UNDETERMINED\n");
            }
        }
        if(i!=t)
        {
            printf("\n");
        }
    }
    return 0;
}

