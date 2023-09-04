#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll n, a[10000+9],i,j,cnt=0,total;
    double ans;
    while(cin>>n)
    {
        if(n==0)break;
        cnt=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        total=n*(n-1)/2;
        for(i=0; i<n; i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(__gcd(a[i],a[j])==1)
                {
                    cnt++;
                }
            }
        }
        if(cnt==0)
            {cout<<"No estimate for this data set."<<endl;}
        else
        {
            ans = sqrt((double)6*total/cnt);
            cout<<fixed<<setprecision(6)<<ans<<endl;
        }
    }
    return 0;
}
