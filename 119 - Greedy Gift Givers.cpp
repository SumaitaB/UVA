#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,money,peeps,i,each,x,p=0;
    string a;
    string s[50];
    while(cin>>n)
    {
        map<string,int>m;
        map<string,int>::iterator it;
        if(p)cout<<endl;
        p=1;
        for(i=0; i<n; i++)
        {
            cin>>a;
            s[i]=a;
            m.insert(make_pair(a,0));
        }
        for(i=0; i<n; i++)
        {
            cin>>a>>money>>peeps;
            each = money/(peeps*1.00);
            money=each*peeps;
            m[a]=m[a]-money;
            a.clear();
            for(int j=0; j<peeps; j++)
            {
                cin>>a;
                m[a]=m[a]+each;
            }
        }
        for(i=0; i<n; i++)
        {

            cout<<s[i]<<" "<<m[s[i]]<<endl;
        }
    }

    return 0;
}
