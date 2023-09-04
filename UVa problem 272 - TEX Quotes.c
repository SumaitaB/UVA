#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char w[10000];
    scanf("%s",&w);
    for(i=0;i<w;i++)
        if(w[i]=='"')
    {
        w[i]='``'
    }

    return 0;
}
