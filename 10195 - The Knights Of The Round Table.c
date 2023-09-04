#include<stdio.h>
#include<math.h>
#define PI 3.1415926535897
int main()
{
    double s,r,triarea,a,b,c;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
    {
         if(((a+b)>c) && ((c+b)>a) && ((a+c)>b))

        {
            s=(a+b+c)/(2.000);
            triarea= sqrt(s*(s-a)*(s-b)*(s-c));
            r=triarea/s;
            printf("The radius of the round table is: %.3lf\n",r);
        }
        else if(a==0 || b==0 || c==0)
        {
            printf("The radius of the round table is: 0.000\n");
        }
           else
        {
            printf("The radius of the round table is: 0.000\n");
        }

    }
    return 0;
}
