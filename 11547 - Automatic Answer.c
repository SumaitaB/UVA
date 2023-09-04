#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int t,i,result=0,n,j,r;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        result=0;
        r=0;
        scanf("%d",&n);
        result=(n*567);
        result=(result/9*1.00);
        result=result+7492;
        result=(result*235);
        result=(result/47*1.00);
        result=result-498;
        result=abs(result);
        result=result/10;
        r=(result%10);
        printf("%d\n",r);

    }
    return 0;
}
