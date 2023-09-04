#include<stdio.h>
int main()
{
    int T,a,b,i,j,p,s=0,n=0;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        p=b-a+1;
        int c[p];
        s=0;
        n=0;
        for(j=0; j<p; j++)
        {
            c[j]=a+n;

            if(c[j]%2==1)
            {
                s=s+c[j];
            }
            n++;


        }
        printf("Case %d: %d\n",i,s);


    }
    return 0;
}
