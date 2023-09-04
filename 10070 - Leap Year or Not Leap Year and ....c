#include<stdio.h>
#include<string.h>
int main()
{
    long long int len,i;
    char  year[30000];
    while(scanf("%lld",&year)!=EOF)
    {
        len=strlen(year);
        for(i=0;i<len;i++)
        {
            year[i] = year[i]-48;
        }
        printf("\n");
        if((year%400==0)||((year%100!=0)&&(year%4==0)))
        {
            printf("This is leap year.\n");
            if(year%15==0)
            {
                printf("This is huluculu festival year.\n");

                if(year%55==0)
                {
                    printf("This is bulukulu festival year.\n");
                }
            }
            else if((year%55==0)&&(year%15!=0))
            {
                printf("This is bulukulu festival year.\n");
            }
        }


        else if(year%15==0)
        {
            printf("This is huluculu festival year.\n");
        }
        else
        {
            printf("This is an ordinary year.\n");
        }
    }
    return 0;
}


#include <stdio.h>
#include <string.h>

int main()
{
    int T, i, j;
    scanf("%d", &T);

    for (i=1; i<=T; i++)
    {
         char N[101];
         scanf("%s", N);
         int k = strlen(N);
         int p = N[k-1] - 48; //char to int conversion

         if (p % 2 == 1)
         {
             printf("odd\n");
         }

         else
         {
             printf("even\n");
         }
     }

     return 0;
}


   for (I=0; I< Len; I++) {

            Mod4 = ((Mod4 * 10) + (A[I]-'0')) % 4;
            Mod100 = ((Mod100 * 10) + (A[I]-'0')) % 100;
            Mod400 = ((Mod400 * 10) + (A[I]-'0')) % 400;
            Mod15 = ((Mod15 * 10) + (A[I]-'0')) % 15;
            Mod55 = ((Mod55 * 10) + (A[I]-'0')) % 55;
        }
