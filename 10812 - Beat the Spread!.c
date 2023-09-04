#include<stdio.h>
int main()
{
    long long int n,s,d,i,x,y,temp;
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lld%lld",&s,&d);
        x=(s+d)/2;
        y=(s-d)/2;
        if((s<d)||(x<0)||(y<0)||((s+d)%2!=0)||((s-d)%2!=0))
        {
            printf("impossible\n");
        }
        else
        {
            if(x<y)
            {
                temp=x;
                x=y;
                y=temp;
            }
            printf("%lld %lld\n",x,y);
        }
    }
    return 0;
}
