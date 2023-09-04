#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,i,x[40],y[40],p[40],r,q,j,k=1,s=0;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        r=a;
        q=b;
        s=0;
        k=1;
        for(i=0; i<40; i++)
        {
            x[i]=0;
            y[i]=0;
            p[i]=0;
        }
        i=31;
        while(r!=0)
        {
            x[i]=r%2;
            r=r/2;
            i--;
        }
        i=31;
        while(q!=0)
        {
            y[i]=q%2;
            q=q/2;
            i--;
        }
        for(i=31; i>=0; i--)
        {
            if(x[i]+y[i]==0)
            {
                p[i]=0;
            }
            else if(x[i]+y[i]==1)
            {
                p[i]=1;
            }
            else if(x[i]+y[i]==2)
            {
                p[i]=0;
            }
        }
        for(i=31; i>=0; i--)
        {
            s=s+(p[i]*k);
            k=k*2;
        }
        printf("%lld\n",s);
    }
    return 0;
}
