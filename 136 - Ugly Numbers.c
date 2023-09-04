#include<stdio.h>
int main()
{
    long long int i,j,k,n,p,c=6,count=0;
    for(j=7;; j++)
    {
        n=j;
        if(c==1500)break;
        count=0;
        for(i=6; i<n; i++)
        {
            if((n%2==0)||(n%3==0)||(n%5==0))
            {
                if(((n%i)==0))
                {
                    count++;
                }
            }
        }
        if(count==0)
        {
            printf("%lld\n",n);
            c++;
        }
    }
    return 0;
}
