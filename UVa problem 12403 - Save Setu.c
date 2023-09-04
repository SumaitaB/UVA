#include<stdio.h>
int main()
{
    int T,i,m=0,a;
    char d[20];
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%s",&d);
        if(d[0]=='d')
        {
            scanf("%d",&a);
            m+=a;
        }
        else if(d[0]=='r')
        {
            printf("%d\n",m);
        }
    }

    return 0;
}
