#include<stdio.h>
#include<string.h>
int main()
{
    long long int i,n,count=0,p=0,t,j;
    scanf("%lld",&t);
    for(j=1; j<=t; j++)
    {
        scanf("%lld",&n);
        {
            p=0;
            count=0;
            while(1)
            {
                if(n<=1)break;
                if(n%2==0)
                {
                    n=n/2;
                    count++;
                }
                else if(n%3==0)
                {
                    n=(2*n)/3;
                    count++;
                }
                else if(n%5==0)
                {
                    n=(4*n)/5;
                    count++;
                }
                else{count=-1;break;}

            }
            printf("%lld\n",count);
        }
    }
    return 0;
}



