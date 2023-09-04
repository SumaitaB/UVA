#include<stdio.h>
int main()
{
    int n,i,x,s=0,r;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        s=0,r=0;

        scanf("%d",&x);
        p=x;

        while( p!=0 )
        {
            r = p%10;
            s = s*10 + r;
            p = (p-r)/10;
        }

    }
    return 0;
}
