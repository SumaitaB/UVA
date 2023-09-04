#include<stdio.h>
#include<string.h>
int main()
{
    long long int t,i,j,x,M,A,R,G,I,T,sum=0,count=0;
    char a[620];
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        count=0;
        M=0,A=0,R=0,G=0,I=0,T=0,sum=0;
        scanf("%s",&a);
        x=strlen(a);
        for(j=0; j<x; j++)
        {
            if(a[j]=='M')
            {
                M++;
            }
            else if(a[j]=='A')
            {
                A++;
            }
            else if(a[j]=='R')
            {
                R++;
            }
            else if(a[j]=='G')
            {
                G++;
            }
            else if(a[j]=='T')
            {
                T++;
            }
            else if(a[j]=='I')
            {
                I++;
            }

        }
        sum=M+A+R+G+I+T;
           while(1)
            {
                if(sum<=0)break;
                if(M>=1&&A>=3&&R>=2&&G>=1&&I>=1&&T>=1)
                {
                    count++;
                }
                M=M-1;
                A=A-3;
                R=R-2;
                G=G-1;
                I=I-1;
                T=T-1;
                sum=sum-9;
            }
         printf("%lld\n",count);
    }
    return 0;
}

