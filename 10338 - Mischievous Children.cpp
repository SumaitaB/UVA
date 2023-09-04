#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for (int k=1; k<=t; k++)
        {
            int a[100]= {0};
            string s;
            cin>>s;
            int len=s.length();
            for(int i=0; i<len; i++)
            {
                a[s[i]]++;
            }
            long long int fact=1,n=len;
            while(n!=1)
            {
                fact=fact*n;
                n--;
            }
            long long int ans = 1,repeats=1;
            for(int j=65; j<=90; j++)
            {
                long long int f=a[j];
                if(f>1)
                {
                    ans=1;
                    while(f!=1)
                    {
                        ans=ans*f;
                        f--;
                    }
                    repeats=repeats*ans;
                }
            }
            fact=fact/repeats;
            cout<<"Data set "<<k<<": "<<fact<<endl;
        }
    return 0;
}
