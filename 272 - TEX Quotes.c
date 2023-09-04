#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char s;
    while(scanf("%c",&s)!=EOF)
    {
        if(s=='"')
        {
            count++;
            if(count%2==1)
            {
                printf("``");
            }
            else if(count%2==0)
            {
                printf("\'\'");
            }
        }
        else
        {
            printf("%c",s);
        }
    }
    return 0;
}
