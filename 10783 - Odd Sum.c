#include<stdio.h>
int main()
{
    int a,b,i,t,s=0,j;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        s=0;
        scanf("%d%d",&a,&b);
        if(a%2==0)
        {
            a=a+1;
        }
        for(j=a; j<=b; j++)
        {
            if(j%2==1)
            {
                s=s+j;
            }
        }
        printf("Case %d: %d\n",i,s);
    }
    return 0;
}
