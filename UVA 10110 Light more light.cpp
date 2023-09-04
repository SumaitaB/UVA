
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,i,n,x;

    while(cin>>n)
    {
     if(n==0)break;
     x=sqrt(n);
     if(x*x==n)
     {
         cout<<"yes\n";
     }else
     {
         cout<<"no\n";
     }
    }
    return 0;
}
