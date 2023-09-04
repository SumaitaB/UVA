#include<stdio.h>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,w,t,i,j,a[100000],k,temp,cnt,s;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        cnt=0;
        s=0;
        scanf("%lld%lld",&m,&w);
        for(j=0; j<m; j++)
        {
            scanf("%lld",&a[j]);
        }
        sort(a,a+m);
        for(j=0; j<m; j++)
        {
            s=s+a[j];
            if(s<=w)
            {
                cnt++;
            }
            if(s>w)break;
        }
        printf("%lld\n",cnt);
    }
    return 0;

}
