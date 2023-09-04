#include<stdio.h>
int main()
{
    long long int t,i,a,b,c;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        if(((a+b)>c)&&((a+c)>b)&&((c+b)>a))
        {
           if(a==b&&b==c)
           {
             printf("Case %lld: Equilateral\n",i);
           }
           else if(a==b||b==c||c==a)
           {
                 printf("Case %lld: Isosceles\n",i);
           }
           else
           {
               printf("Case %lld: Scalene\n",i);
           }
        }
        else
        {
             printf("Case %lld: Invalid\n",i);
        }

    }
    return 0;
}
