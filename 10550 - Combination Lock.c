#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,c,start,s=0,sum=720;
    while(scanf("%lld%lld%lld%lld",&start,&a,&b,&c)!=EOF)
    {
        sum=360*3;
        if(start==0&&a==0&&b==0&&c==0)break;
        s=start-a;
        if (s<0)
        {
            s=s+40;
        }
        sum+=s*9;
        s=b-a;
        if (s<0)
        {
            s=s+40;
        }
        sum+=s*9;
        s=b-c;
        if (s<0)
        {
            s=s+40;
        }
        sum+=s*9;
        printf("%d\n",sum);
    }
    return 0;
}
