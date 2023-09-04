#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    long long int n,i,j,s=0,q;
    double p;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)break;
        p=(double)sqrt(n);
        q=sqrt(n);
        if(double(p-q)==0.00000)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }

    }
    return 0;
}
