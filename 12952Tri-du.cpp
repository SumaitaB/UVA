#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    long long int a,b,i,j;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        if(a==b)
        {
            cout<<b<<endl;
        }
        else if(a>b)
        {
            cout<<a<<endl;
        }
          else if(b>a)
        {
            cout<<b<<endl;
        }

    }
    return 0;
}
