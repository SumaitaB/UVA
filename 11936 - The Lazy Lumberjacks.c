#include<stdio.h>
int main()
{
    long long int a,b,c,i,t;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
         scanf("%lld%lld%lld",&a,&b,&c);
        if(((a+b)>c)&&((a+c)>b)&&((c+b)>a))
        {
            printf("OK\n");
        }
        else
        {
            printf("Wrong!!\n");
        }
    }
    return 0;
}
