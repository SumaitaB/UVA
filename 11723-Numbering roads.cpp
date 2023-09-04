#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,r,cnt=0;
    int m=1;

    while(cin>>r>>n)
    {
        if(n==0&&r==0)break;

        if((r-n)>(n*26))
        {
            printf("Case %d: impossible\n",m);
        }
        else
        {

            cnt=(r-n)/n;
            if(((r-n)%n)>0)
            {
                cnt++;
            }
            printf("Case %d: %d\n",m,cnt);
        }
        m++;
    }

    return 0;
}
