#include<stdio.h>
#include<string.h>
int main()
{
    long long int t,l,i,j,x,p[300]= {0},max=-999;
    char a[1000];
    scanf("%lld",&t);
    getchar();
    for(l=1;l<=t;l++)
    {
        gets(a);
        for(i=0; i<300; i++)
        {
            p[i]=0;
        }
        max=-999;
        x=strlen(a);
        for(i=0; i<x; i++)
        {
            if(a[i]>=97&&a[i]<=122)
            {
                p[a[i]]++;
            }
            else if(a[i]>=65&&a[i]<=90)
            {
               p[a[i]+32]++;
            }
        }
        for(i=50; i<250; i++)
        {
            if(max<p[i])
            {
                max=p[i];
            }
        }
        for(i=50;i<200;i++)
        {
            if(p[i]==max)
            {
                printf("%c",i);
            }
        }
        printf("\n");
    }
    return 0;
}




