#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,a[5],maxx=-999999999,minn=999999999,c,j;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        maxx=-999999999,minn=999999999;
        for(j=1; j<=3; j++)
        {
            cin>>a[j];
        }
        for(j=1; j<=3; j++)
        {
            if(a[j]>maxx)
            {
                maxx=a[j];
            }
            if(a[j]<minn)
            {
                minn=a[j];
            }
        }
        for(j=1; j<=3; j++)
        {
            if(a[j]!=maxx&&a[j]!=minn)
            {
                c=a[j];
            }
        }

        cout<<"Case "<<i<<": "<<c<<endl;
    }
    return 0;
}
