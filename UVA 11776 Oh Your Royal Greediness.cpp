#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    for(ll x=1;; x++)
    {
        ll n;
        cin>>n;
        if(n==-1)break;

        ll i,j,cnt1=0,cnt2=0,maxx=0,a[1000+10]={0},b[1000+10]={0};
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
            cin>>b[i];

        }

        for(i=1; i<=n; i++)
        {
            cnt1=0;
            cnt2=0;

            for(j=1; j<=n; j++)
            {
                if(a[i]>=a[j]&&a[i]<=b[j]) // current starting position start er cheyeo boro and end cheyeo choto
                {
                    cnt1++;
                }
                if(b[i]>=a[j]&&b[i]<=b[j]) // current ending position start er cheyeo boro and e cheyeo choto
                {
                    cnt2++;
                }
            }
            if(cnt1>maxx)
            {
                maxx=cnt1;
            }
            if(cnt2>maxx)
            {
                maxx=cnt2;
            }

        }
        cout<<"Case "<<x<<": "<<maxx<<endl;


    }


    return 0;
}
