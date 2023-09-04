#include<stdio.h>
#include<string.h>
int main()
{
    long long int i,t,j,x,p=0;
    char a[1000];
    scanf("%lld",&t);
    getchar();
    for(i=1; i<=t; i++)
    {
        gets(a);
        x=strlen(a);
        p=0;
        for(j=0; j<x; j++)
        {
                if(a[j]=='M')
                {
                    p++;

                }
           if(a[j]=='F')
                {
                    p--;
                }
        }

        if(p==0&&x>3)
        {
            printf("LOOP\n");
        }
        else
        {
            printf("NO LOOP\n");
        }
}
    return 0;
}


