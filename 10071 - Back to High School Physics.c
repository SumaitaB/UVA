#include<stdio.h>
int main()
{
    int t,s,v;
    while(scanf("%d%d",&v,&t)!=EOF)
    {
       s=v*(2*t);
        printf("%d\n",s);
    }

    return 0;
}

