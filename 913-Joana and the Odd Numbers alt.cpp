#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    long long int n,x,tx,res,i,p,k,s,countt;
    while(scanf("%lld",&n)!=EOF)
    {
        x=0;
        s=0;
        for(i=3; i<=n; i=i+2)
        {
            x=x+1;
        }
        x=x-1;
        tx=(x*(x+1))/2;
        p=4*tx;
        p=p+n;
        countt=n;
        if(n==3)
        {
            cout<<"15"<<endl;
        }
        else
        {
            for(i=p;;i=i+2)
            {
                if(countt==0)break;
                if(countt<=3)
                {
                    s+=i;
                }
                countt--;

            }
            cout<<s<<endl;
        }
    }

    return 0;
}
