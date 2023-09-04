#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    while(scanf(" %[^\t\n]s",&s)!=EOF)
    {
        printf("%s\n",s);
    }
    return 0;
}
