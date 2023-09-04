#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    long long int i,j,t,q,r;
    char a[100000],b[1000];
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%s",&a);
        scanf("%lld",&q);
        for(j=1; j<=q; j++)
        {
            scanf("%s",&b);
            r=strstr(a,b);
            if(r)
            {
                printf("y\n");
            }
            else
            {
                printf("n\n");
            }
        }
    }
    return 0;
}




