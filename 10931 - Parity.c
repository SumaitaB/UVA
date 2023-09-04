#include<stdio.h>
int main()
{
    long long int n,i,a[100000],r,sum,p,I,j;
    while(1)
    {
        sum=0;
        scanf("%lld",&I);
        if(I==0)break;
        p=I;
        i=0;
        printf("The parity of ");
        while(p!=0)
        {
            r=p%2;
            sum+=r;
            a[i]=r;
            p=p/2;
            i++;
        }
        for(j=i-1;j>=0;j--)
        {
              printf("%lld",a[j]);
        }
        printf(" is %lld (mod 2).\n",sum);
    }
    return 0;
}
