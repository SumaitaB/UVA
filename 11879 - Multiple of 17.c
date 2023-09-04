#include<stdio.h>
#include<string.h>

int main()
{
    long long int i,x,mod17=0,s=0;

    char a[1000];

    while(scanf("%s",&a)!=EOF)
    {
        mod17=0;
        x=strlen(a);
        s=0;
        for(i=0; i<x; i++)
        {
            s+=(a[i]-48);
        }
        if(s==0)break;


        for(i=0; i<x; i++)
        {
            mod17=(mod17*10+(a[i]-48))%17;
        }
        if(mod17==0)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }

    }
    return 0;
}
