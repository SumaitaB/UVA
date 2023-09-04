#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    long long int a,b,c;
    while(scanf("%lld%lld%lld",&a,&b,&c)!=EOF)
    {
        if(a==b&&b==c)
        {
            printf("*\n");
        }
        else if(a==b&&a!=c)
        {
            printf("C\n");
        }
         else if(b==c&&c!=a)
        {
            printf("A\n");
        }
         else if(a==c&&a!=b)
        {
            printf("B\n");
        }
    }
    return 0;
}
