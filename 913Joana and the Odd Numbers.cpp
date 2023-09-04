#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    long long int p,n,k,x,i,j;
    while(scanf("%lld",&n)!=EOF)
    {
        x=0;
        for(i=3;i<=n;i=i+2)
        {
            x=x+1;
        }
        x=x-1;
        cout<<x;
    }

    return 0;
}
