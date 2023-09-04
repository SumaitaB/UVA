#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long long int a,b,c,i;
    double s,yell,red,vi,triarea,r,R,inarea,circumarea,pi=acos(-1);
    while(scanf("%lld %lld %lld", &a, &b, &c) == 3)
    {
    s=(a+b+c)/(2*1.00);
    triarea=sqrt(s*(s-a)*(s-b)*(s-c));
    r=(triarea*1.00/s);
    R=((a*b*c)/(4*triarea));
    inarea=pi*(r*r);
    circumarea=pi*(R*R);
    yell=circumarea-triarea;
    red=inarea;
    vi=triarea-inarea;
    printf("%.4lf %.4lf %.4lf\n",yell,vi,red);
    }
    return 0;
}
