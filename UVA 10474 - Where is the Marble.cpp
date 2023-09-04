
#include<bits/stdc++.h>

using namespace std;
long long int a[1000000]= {0};
int main ()
{
    long long int n,l,i,j,x,p,q,t=1;
    while(1)
    {
        cin>>n>>q;
        if(n==0&&q==0)
            break;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<"CASE# "<<t<<":"<<endl;
        for(i=0; i<q; i++)
        {
          cin>>x;
          p=lower_bound(a,a+n,x)-a;
          if(a[p]==x)
          {
              cout<<x<<" found at "<<p+1<<endl;
          } else
          {
              cout<<x<<" not found"<<endl;
          }

        }
        t++;
    }
    return 0;
}



