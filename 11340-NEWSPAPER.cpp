#include<bits/stdc++.h>
using namespace std;
string a;
int main ()
{
    int t,x;
    double sum=0;
    cin>>t;
    while(t--)
    {
        a.clear();
        sum=0;
        int k;
        cin>>k;
        map<char,int>m;
        map<char,int>::iterator it;
        while(k--)
        {
            cin>>a[0]>>x;
            m.insert(make_pair(a[0],x));
        }
        int d;
        cin>>d;
        cin.ignore();
        sum=0;

        while(d--)
        {
            getline(cin,a);

            for(int i=0; i<a.length(); i++)
            {
                it = m.find(a[i]);
                if(it!=m.end())
                {
                    sum=sum+m[a[i]];
                }
            }
            a.clear();
        }
        sum=sum/100.00;
        cout<<fixed<<setprecision(2)<<sum<<"$"<<endl;
        m.clear();
    }
    return 0;
}


