#include<bits/stdc++.h>
using namespace std;
long long int a[1005],sum[200];
int main()
{
    long long int n,b,h,w,p,i,j,k,q,minn=9999999999,f=0,x,t;
    while(scanf("%lld%lld%lld%lld",&n,&b,&h,&w)!=EOF)
    {
        for(i=0; i<=150; i++)
        {
            sum[i]=0;
        }
        q=1;
        f=0;
        minn=9999999999;
        for(i=1; i<=h; i++)
        {
            scanf("%lld",&p);
            int d=n*p;
            for(j=1; j<=w; j++)
            {
                scanf("%lld",&a[j]);
                if(sum[q]<d)
                {
                    if(a[j]>=n)
                    {
                        sum[q]=n*p;
                    }
                }
            }
            q++;
        }
        for(x=1; x<=h; x++)
        {
            if(sum[x]<=b&&sum[x]>0)
            {
                f=1;
                if(sum[x]<minn)
                {
                    minn=sum[x];
                }
            }
        }
        if(f==1)
        {
            printf("%lld\n",minn);
        }
        else
        {
            printf("stay home\n");
        }
    }

    return 0;
}

