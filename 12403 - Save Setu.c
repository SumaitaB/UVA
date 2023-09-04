#include<stdio.h>
int main()
{
    int t,i;
    long long int sum=0,money;
    char a[50];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",&a);
        if(a[0]=='d')
        {
            scanf("%lld",&money);
             sum=sum+money;
        }
         else if(a[0]=='r')
        {
           printf("%lld\n",sum);
        }

    }
    return 0;
}
