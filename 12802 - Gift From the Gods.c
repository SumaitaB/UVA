#include<stdio.h>
int main()
{
    long long int a,n,s=0,r,i,count=0,d;
    while(scanf("%lld",&a)!=EOF)
    {
        n=a;
        s=0;
        count=0;
        while(n!=0)
        {
            r=n%10;
            s=s*10+r;
            n=n/10;
        }
       for(i=1;i*i<=a;i++)
       {
           d=a/i;
           if(a%i==0)
           {
               count++;
           }
            if(a%d==0&&d!=i)
           {
               count++;
           }

       }
       printf("%lld\n",a*2);
       if((count==2)&&(s==a))break;
    }
    return 0;
}


