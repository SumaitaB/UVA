#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,x;
    char a[10];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%s",&a);
        x=strlen(a);
        if(x==5)
        {
            printf("3\n");
        }
        else if(x<5)
        {
            if((a[1]=='n'&&a[2]=='e')||(a[0]=='o'&&a[2]=='e')||(a[0]=='o'&&a[1]=='n'))
            {
                printf("1\n");
            }
            else if((a[1]=='w'&&a[2]=='o')||(a[0]=='t'&&a[2]=='o')||(a[0]=='t'&&a[1]=='w'))
            {
                printf("2\n");
            }
        }
    }

    return 0;
}

