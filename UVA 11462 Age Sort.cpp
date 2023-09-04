
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n=0,i=0,j=0,k=0,x=0,cnt=0;


    for(;;)
    {

        i=0,j=0,k=0,x=0,cnt=0;

        ll age[105] = {0};

        cin>>n;

        if(n==0)
        {
            break;
        }
        for(i=0; i<n; i++)
        {
            cin>>x;
            age[x]++;
            cnt++;
        }

        for(i=0; i<=100; i++)
        {
            for(j=0; j<age[i]; j++)
            {
                cout<<i;
                while(1)
                {
                    cnt--;
                    if(cnt<=0)break;
                    else
                    {
                        cout<<" ";
                        break;
                    }
                }
            }

        }
        cout<<endl;
    }

    return 0;
}
