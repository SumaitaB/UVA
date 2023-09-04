#include <bits/stdc++.h>
using namespace std;
int func(long long int q)
{
    if(q==0)return 0;
    else
    return q=(func(q/2)+q%2);
}
int main()
{
    long long int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<func(n)<<endl;
    }
    return 0;
}
