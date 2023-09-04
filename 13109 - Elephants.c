#include<stdio.h>
#include<math.h>

int main()
{
    long long int m,w,t,i,j,a[100000],k,temp,count,s;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        count=0;
        s=0;
        scanf("%lld%lld",&m,&w);
        for(j=0; j<m; j++)
        {
            scanf("%lld",&a[j]);
        }
      sort(a,a+m)
          for(j=0; j<m; j++)
        {
            s=s+a[j];
            if(s<=w)
            {
                count++;
            }
            if(s>w)break;
        }
        printf("%lld\n",count);
    }
    return 0;

}
