#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    long long int n,t,i,j,s=0,k=0,p;
    char a[15];
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        k=0;
        p=0;
        s=0;
        scanf("%s",&a);
        j=2;
        while(1)
        {
            if(j==-1)break;
            s+=((a[j]-65)*(lround(pow(26,k))));
            k++;
            j--;
        }
        j=7;
        k=0;
         while(1)
        {
            if(j==3)break;
            p+=((a[j]-48)*(lround(pow(10,k))));
            k++;
            j--;
        }
        if((abs(s-p))<=100)
        {
            printf("nice\n");
        }
        else
        {
            printf("not nice\n");
        }
    }
    return 0;
}
