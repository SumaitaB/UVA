#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long long int n,i,r=0,s=0,x,count=0,prime=0,d,e;
    while(scanf("%lld",&n)==1)
    {
        x=n;
        s=0,r=0,count=0,prime=0;
        for(i=1; i*i<=n; i++)
        {
            if(count>2)break;
            d=n/i;
            if(n%i==0)
            {
                count++;
            }
            if(n%d==0&&i!=d)
            {
                count++;
            }
        }
        if(n>9)
        {
            while(x!=0)
            {
                r=x%10;
                s=r+s*10;
                x=x/10;
            }
            e=0;
            if(s!=n)
            {
                for(i=1; i*i<=s; i++)
                {
                    e=s/i;
                    if(prime>2)break;
                    if(s%i==0)
                    {
                        prime++;
                    }
                    if(s%e==0&&e!=i)
                    {
                        prime++;
                    }
                }
            }
        }

        if((count==2)&&(prime==2))
        {
            printf("%lld is emirp.\n",n);
        }
        else if((count==2)&&(prime!=2))
        {
            printf("%lld is prime.\n",n);
        }
        else if(count!=2)
        {
            printf("%lld is not prime.\n",n);
        }
    }
    return 0;
}
