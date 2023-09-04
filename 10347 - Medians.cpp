#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    long long int t,i,j;
    double m1,m2,m3,s,a,p;
    i=1;
    while (scanf("%lf%lf%lf", &m1, &m2, &m3)!=EOF)
    {
        if(i>1000)break;
        s=0.5*(m1+m2+m3);
        p=(s*(s-m1)*(s-m2)*(s-m3));
        a=(4/3.00)*(sqrt(p));

        if(a>0.0)
        {
            printf("%0.3lf\n", a);
        }
        else
        {

            printf("-1.000\n");
        }
        i++;

    }

    return 0;
}
