#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    long long int a,n,p;
    while(scanf("%lld",&n)!=EOF)
    {
        a=(n*(n+2))/2;
        a=a*3-6;
        cout<<a<<endl;
    }
    return 0;
}
