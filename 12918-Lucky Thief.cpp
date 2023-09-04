#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,t,x,y,tries;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        x=(m-1)*n;
        y=(m-n)*n;
        tries=(x+y)/2;
        cout<<tries<<endl;
    }
    return 0;
}
