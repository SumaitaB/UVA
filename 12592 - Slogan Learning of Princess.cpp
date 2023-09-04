#include<bits/stdc++.h>
using namespace std;

int main ()
{
    map<string,string>m;
    map<string,string>::iterator it;
    string a,b;
    int n,i,t;
    cin>>n;
    getchar();
    while(n--)
    {
        getline(cin,a);
        getline(cin,b);
        m[a]=b;

    }
    cin>>t;
    getchar();
    while(t--)
    {
        getline(cin,a);
        cout<<m[a]<<endl;

    }
    return 0;
}




