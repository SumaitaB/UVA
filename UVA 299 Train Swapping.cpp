
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;

    cin>>t;

    while(t--)
    {
        ll n,i,j;

        ll train[100]= {0};

        cin>>n;

        ll cnt=0;

        for(i=0; i<n; i++)
        {
            cin>>train[i];
        }

        for(i=0; i<n-1; i++)
        {
            for(j=0; j<n-i-1; j++)
            {

                if(train[j]>train[j+1])
                {
                    ll temp;
                    cnt++;

                    //swapping
                    temp=train[j];
                    train[j]=train[j+1];
                    train[j+1]=temp;

                }


            }

        }
        cout<<"Optimal train swapping takes "<<cnt<<" swaps."<<endl;

    }

    return 0;
}
