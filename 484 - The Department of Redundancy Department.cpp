#include<bits/stdc++.h>
using namespace std;

int main ()
{
    map<int,int>m;
    vector<int>v;
    long long int x;
    while(scanf("%lld",&x)!=EOF)
    {
        if(m.find(x)!=m.end())
        {
            m[x]++;
        }
        else
        {
            m[x]=1;
            v.push_back(x);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "<<m[v[i]]<<endl;
    }
    return 0;
}





