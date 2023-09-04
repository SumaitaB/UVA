#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[1000];
    i=1;
    while(scanf("%s",&a)!=EOF)
    {
        if(a[0]=='#')break;
        if(i==2000)break;
        if((strcmp(a,"HELLO"))==0)
        {
            printf("Case %d: ENGLISH\n",i);
        }
        else if((strcmp(a,"HOLA"))==0)
        {
            printf("Case %d: SPANISH\n",i);
        }
        else if((strcmp(a,"HALLO"))==0)
        {
            printf("Case %d: GERMAN\n",i);
        }
        else if((strcmp(a,"BONJOUR"))==0)
        {
            printf("Case %d: FRENCH\n",i);
        }
        else if((strcmp(a,"CIAO"))==0)
        {
            printf("Case %d: ITALIAN\n",i);
        }
        else if((strcmp(a,"ZDRAVSTVUJTE"))==0)
        {
            printf("Case %d: RUSSIAN\n",i);
        }
         else
        {
            printf("Case %d: UNKNOWN\n",i);
        }
        i++;
    }
     return 0;
}
