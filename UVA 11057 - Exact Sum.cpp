
#include<bits/stdc++.h>

using namespace std;
int main ()
{
    long long int n,a[100000+5],m,x,y,d,i,j,p,q;
    while(scanf("%lld",&n)!=EOF)
    {
        y=99999999999;
        x=0;
        d=y-x;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        cin>>m;
        x=0;
        y=0;
        sort(a,a+n);
        d=99999999;
        for(i=0; i<n; i++)
        {
            for(j=i; j<n; j++)
            {
                if((a[i]+a[j])==m)
                {
                    p=a[i];
                    q=a[j];

                    if(d>=(q-p))
                    {
                        x=p;
                        y=q;
                        d=y-x;
                    }

                }
            }
        }
        cout<<"Peter should buy books whose prices are "<<x<<" and "<<y<<".\n"<<endl;
    }
    return 0;
}


