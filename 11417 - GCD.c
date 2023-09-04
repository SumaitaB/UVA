#include<stdio.h>
int main()
{
    long long int num,deno,n,i,j,k,t,g=0,rem=0;
    for(i=1;; i++)
    {
        if(i==100)break;
        scanf("%lld",&n);
        g=0;
        if(n==0)break;
        for(j=1; j<n; j++)
        {
            for(k=j+1; k<=n; k++)
            {
                num=k,deno=j;
              rem=num%deno;
              while(rem!=0)
              {
                  num=deno;
                  deno=rem;
                  rem=num%deno;
              }
              g+=deno;
            }
        }
        printf("%lld\n",g);
    }
    return 0;
}
