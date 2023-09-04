#include<stdio.h>
#include<string.h>
int main()
{
    long long int i,t,j,x,count=0;
    double p=0;
    char a[500];
    while(scanf("%s",&a)!=EOF)
    {
        if(a[0]=='*')break;
        count=0;
        p=0;
        x=strlen(a);
        for(j=0; j<x; j++)
        {
            if(a[j]=='/')
            {
                if(p==1)
                {
                    count++;
                }
                p=0;
            }
               if(a[j]=='W')
               {
                   p++;

               }
                else if(a[j]=='H')
               {
                   p=p+0.5;
               }
                 else if(a[j]=='Q')
               {
                    p=p+(1.00/4.00);
               }
                 else if(a[j]=='E')
               {
                    p=p+(1.00/8.00);
               }
                 else if(a[j]=='S')
               {
                    p=p+(1.00/16.00);
               }
                 else if(a[j]=='T')
               {
                    p=p+(1.00/32.00);
               }
                 else if(a[j]=='X')
               {
                    p=p+(1.00/64.00);
               }
        }

     printf("%lld\n",count);
}
    return 0;
}



