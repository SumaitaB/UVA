#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
   long long int n,profit;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n<0)break;
        profit=(n/4.00)*100;
        if(n<=1)
        {
            cout<<"0%"<<endl;
        }
        else
        {
            cout<<profit<<"%"<<endl;
        }

    }
    return 0;
}
