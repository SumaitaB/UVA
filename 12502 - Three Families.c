#include<stdio.h>
int main()
{
    int x,y,z,money,i,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        money=z*((2*x)-y)/(x+y);
       if(money<=0)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n",money);
        }
    }
    return 0;
}
