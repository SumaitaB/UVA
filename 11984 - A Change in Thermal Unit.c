#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long long int c,f,t,i;
    double a,b;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
       scanf("%lld%lld",&c,&f);
       a=((9/(5*1.00))*c)+32;
       a=a+f;
       b=((a-32)/(9*1.00))*5;
       printf("Case %lld: %.2lf\n",i,b);

    }
    return 0;
}

