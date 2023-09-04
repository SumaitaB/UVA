#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    string op="";
    cin>>n;
    while(n--)
    {
        long long int a,b;
        cin>>hex>>a>>op>>b;
        bitset<13> b1(a), b2(b);
        cout<<b1.to_string()<<" "<<op<<" "<<b2.to_string()<<" = ";
        if(op.compare("+")==0)
        {
            cout<<a+b<<endl;
        }
        else if(op.compare("-")==0)
        {
            cout<<a-b<<endl;
        }
    }
    return 0;
}
