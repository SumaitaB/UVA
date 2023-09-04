#include<stdio.h>
int main()
{
    long long int t,i,qy,d,m,y,j,count=0;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        count=0;
        scanf("%lld%lld%lld%lld",&d,&m,&y,&qy);
        if(d==29&&m==2)
        {
            for(j=y+1; j<=qy; j++)
            {
                if((j%400==0)||((j%100!=0)&&(j%4)==0))
                {
                    count++;
                }
            }
        }
        else
        {
            count=(qy-y);
        }
        printf("Case %lld: %lld\n",i,count);
    }
    return 0;
}
