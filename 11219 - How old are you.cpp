#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    long long int t,i,j,d1,m1,y1,d2,m2,y2,p,q,r;
    char a,b,c,n;
    cin>>t;
    for(i=1; i<=t; i++)
    {

        cin>>d1>>a>>m1>>b>>y1;
        cin>>d2>>c>>m2>>n>>y2;

        p=d1-d2;
        q=m1-m2;
        r=y1-y2;

        if(p==0&&q==0&&r==0)
        {
            r=0;
        }
        else
        {
            if(q<0)
            {
                r=r-1;
            }
            else if(q==0)
            {
                if(p<0)
                {
                    r=r-1;
                }
            }
        }
        if(r>130)
        {
            cout<<"Case #"<<i<<": Check birth date"<<endl;
        }
        else if(r==0)
        {
            cout<<"Case #"<<i<<": 0"<<endl;
        }
        else if(r<0)
        {
            cout<<"Case #"<<i<<": Invalid birth date"<<endl;
        }
        else
        {
            cout<<"Case #"<<i<<": "<<r<<endl;
        }
    }

    return 0;
}
