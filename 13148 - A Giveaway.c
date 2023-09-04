#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long long int n,i,j;
    double x1,x2,y1,y2;
    for(i=1;; i++)
    {
        scanf("%lld",&n);
        if(n==0)break;
        if(i==1001)break;
        x1=(int)(sqrt(n));
        x2=(double)(sqrt(n));
        y1=(int)(cbrt(n));
        y2=(double)(cbrt(n));
        if((x1==x2)&&(y1==y2))
        {
            printf("Special\n");
        }
        else
        {
            printf("Ordinary\n");
        }
    }
    return 0;
}
