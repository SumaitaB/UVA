#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j;
    char w[10];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%s",&w);
        if(strlen(w)==5)
        {
            printf("3\n");
        }
        else if(strlen(w)==3)
        {
            if(w[0]=='o'||w[1]=='n'||w[2]=='e')
            {
                printf("1\n");
            }
            else if(w[0]=='t'||w[1]=='w'||w[2]=='o')
            {
                printf("2\n");
            }
        }

    }

    return 0;
}
