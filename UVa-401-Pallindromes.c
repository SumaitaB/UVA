#include<stdio.h>
int main()
{
    char a[50],b[50];
    int i,j,c=0,x=0;
    while(scanf("%s",&a)!=EOF)
    {
        x=strlen(a);
        for(i=0; i<x; i++)
        {
            b[i]=a[(x-1)-i];
        }
        b[x]='\0';
        if(strcmp(a,b)==0)
        {
            c=1;
        }
        else
        {
            c=0;
        }
        printf("%d\n",c);
        for(i=0; i<x; i++)
        {
            switch()
            {
            case A:
                A
            }
        }
    }
    return 0;
}
