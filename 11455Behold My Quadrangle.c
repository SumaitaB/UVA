#include<stdio.h>
int main()
{
    long long int a,b,c,d,t,i;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld%lld%lld%lld",&a,&b,&c,&d);

        if(a==b&&b==c&&c==d&&d==a)
        {
            printf("square\n");
        }
        else if((a==b&&c==d)||(a==c&&b==d)||(b==c&&a==d))
        {
            printf("rectangle\n");
        }
        else if(((a+b+c)>d)&&((b+c+d)>a)&&((a+b+d)>c)&&((a+c+d)>b))
        {
            printf("quadrangle\n");
        }
        else
        {
            printf("banana\n");
        }
    }
    return 0;
}
