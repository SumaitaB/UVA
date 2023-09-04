
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    ///LCS theory;
    ///c[i][j] = (c[i-1][j-1])+1 , if X[i]==Y[j];  {diagonal+1}
    ///c[i][j] = max(c[i][j-1],c[i-1][j] , otherwise;  {max betwn left or up}

    char X[1000+10];
    char Y[1000+10];

    while(gets(X))
    {
        gets(Y);
        ll m,n,j;

        m=strlen(X);
        n=strlen(Y);

        ll L[m+5][n+5];

        char z[m+5][n+5];

        for(ll i=0; i<=m; i++)
        {
            for(ll j=0; j<=n; j++)
            {
                if(i==0||j==0)
                {
                    L[i][j]=0;
                    z[i][j]='f';  /// f for nothing
                }
                else if(X[i-1]==Y[j-1])
                {
                    L[i][j]=L[i-1][j-1]+1;
                    z[i][j]='d';  ///d for diagonal
                }
                else
                {
                    ll a = L[i-1][j];
                    ll b = L[i][j-1];

                    ll c = max(a,b);

                    if(c==a)
                    {
                        L[i][j]=a;
                        z[i][j]='v'; ///v for up/vertical
                    }
                    else
                    {
                        L[i][j]=b;
                        z[i][j]='l';  ///l for left
                    }
                }
            }
        }

        cout<<L[m][n]<<endl;

    }
    return 0;
}
