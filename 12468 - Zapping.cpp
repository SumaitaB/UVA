#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    long long int t,a,b,r,p=0;
    while(1)
    {
        p=0;
        scanf("%lld%lld",&a,&b);
        if(a==-1&&b==-1)break;
        if(a==99&&b==0)
        {
            r=1;
        }
        else if(a==0&&b==99)
        {
            r=1;
        }
        else
        {
            if(a>b)
            {
            p=(100-a)+b;
            }
             else if(b>a)
            {
            p=(100-b)+a;
            }
            r=abs(a-b);
            if(p<r)
            {
                r=p;
            }
        }
        printf("%lld\n",r);
    }
    return 0;
}
