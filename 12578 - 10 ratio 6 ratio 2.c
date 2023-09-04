#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,l;
    double r,b,a1,a2,pi=(acos(-1));
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
         scanf("%d",&l);
          b=((6*l)/(10*1.00));
          r=(b/(3*1.00));
          a1=pi*r*r;
          a2=((l*1.00*b)-a1);

        printf("%.2lf %.2lf\n",a1,a2);
    }
    return 0;
}
