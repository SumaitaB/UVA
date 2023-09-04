

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define memo(a,b) memset(a,b,sizeof(a))
#define INF 1e9
#define EPS 1e-8
#define PI 3.14159265358979323846

typedef long long ll ;
typedef unsigned long long ull ;


const ll M1 = 1000000007 , M2 = 10000019 , h1 = 999983 , h2 = 99991 ;
int N , M , X , Y ;
char text[1000+10][1000+10] , pattern[100+10][100+10];
ll hash_matrix[1000+10][1000+10];

ll pattern_hash()
{
    for(int i=0;i<X;i++)
    {
        ll P = 0 ;
        for(int j=0;j<Y;j++) P = ( P*h1+pattern[i][j] )% M1 ;
        hash_matrix[i][0] = P ;
    }

    for(int j=0;j<Y;j++)
    {
        ll P = 0 ;
        for(int i=0;i<X;i++) P = ( P*h2+hash_matrix[i][j] )% M2 ;
        hash_matrix[0][j] = P ;
    }

    return hash_matrix[0][0] ;
}

void text_hash()
{
    ll d = 1;
    for(int i=1;i<Y;i++) d=(d*h1)%M1;

    for(int i=0;i<N;i++)
    {
        ll P = 0 ;
        for(int j=0;j<Y;j++) P = ( P*h1+text[i][j] )% M1 ;

        for(int j=0;j<=M-Y;j++)
        {
            hash_matrix[i][j] = P ;
            P = (((P-text[i][j]*d)%M1)*h1 + text[i][j+Y])%M1;
            P = (P+M1)%M1;
        }
    }

    d = 1 ;
    for(int i=1;i<X;i++) d=(d*h2)%M2;

    for(int j=0;j<=M-Y;j++)
    {
        ll P = 0 ;
        for(int i=0;i<X;i++) P = ( P*h2+hash_matrix[i][j] )% M2 ;

        for(int i=0;i<=N-X;i++)
        {
            ll temp = P ;
            P = (((P-hash_matrix[i][j]*d)%M2)*h2 + hash_matrix[i+X][j])%M2;
            P = (P+M2)%M2;
            hash_matrix[i][j] = temp ;
        }
    }
}

int main()
{

    int T ;
    scanf("%d",&T);
    while( T-- )
    {
        scanf("%d%d",&N,&M);
        for(int i=0;i<N;i++) scanf("%s",&text[i]);

        scanf("%d%d",&X,&Y);
        for(int i=0;i<X;i++) scanf("%s",&pattern[i]);

        ll h = pattern_hash();

        text_hash() ;

        int ans = 0 ;
        for(int i=0;i<=N-X;i++)
        {
            for(int j=0;j<=M-Y;j++)
            {
                if(hash_matrix[i][j]==h) ans++;
            }
        }

        printf("%d\n",ans);
    }
    return 0;
}
