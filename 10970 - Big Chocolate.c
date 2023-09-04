#include<stdio.h>
int main()
{
    long long int m,n,cuts,rcut,colcut;
    while(scanf("%lld%lld",&m,&n)!=EOF)
    {cuts=0,rcut=0,colcut=0;
        if(m>=n)
        {
           rcut=(m-1);
           colcut=(n-1)*m;
        }
        else
        {
              rcut=(n-1);
           colcut=(m-1)*n;
        }
        cuts=rcut+colcut;
        printf("%lld\n",cuts);
    }
    return 0;
}
