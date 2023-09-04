#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    long long int n,i,j,k,x,y,p,q;
    double p1,p2,q1,q2;
    for(i=1;; i++)
    {
        scanf("%lld",&n);
        if(n==0)break;
        if(i==100)break;
        p=0,q=0;
        for(k=n+1; k<=((2*n)-1); k++)
        {
            for(j=1; j<=n-1; j++)
            {
                x=k;
                y=j;
                if((x-y)==n)
                {
                    p1=(int)(cbrt(x));
                    p2=(double)(cbrt(x));
                    q1=(int)(cbrt(y));
                    q2=(double)(cbrt(y));
                    if(p1==p2&&q1==q2)
                    {
                        p=cbrt(x);
                        q=cbrt(y);
                    }
                    break;
                }
            }
        }

        if(p>0&&q>0)
        {

            printf("%lld %lld\n",p,q);
        }
        else if(p<=0&&q<=0)
        {
            printf("No solution\n");
        }
    }
    return 0;
}
