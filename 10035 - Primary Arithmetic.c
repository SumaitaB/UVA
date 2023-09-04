#include<stdio.h>
int main()
{
    long long int i,n,t,j,k,x,y,count=0,a,d,b,r1,r2;
    while(1)
    {
        count=0;
        d=0;
        r1=0;
        r2=0;
        scanf("%lld",&a);
        scanf("%lld",&b);
        if(a==0&&b==0)break;
        x=a;
        y=b;
        d=0;
        if(x>=y)
        while(x!=0)
        {
            r1=x%10;
            r2=y%10;
            d=d+r1+r2;
             if(d>9)
            {
                count++;
            }
            d=d/10;
            x=x/10;
            y=y/10;
        }
         else if(x<y)
        while(y!=0)
        {
            r1=x%10;
            r2=y%10;
            d=d+r1+r2;
            if(d>9)
            {
                count++;
            }
            d=d/10;
            x=x/10;
            y=y/10;
        }

        if(count==0)
        {
            printf("No carry operation.\n");
        }
        else if(count==1)
        {
            printf("%lld carry operation.\n",count);
        }
        else{printf("%lld carry operations.\n",count);}
    }
    return 0;
}
