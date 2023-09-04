#include<stdio.h>
int main()
{
    int t,n,a[110],max,min,i,j,min_dist;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        max=-999999;
        min=1000000;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
         for(j=0;j<n;j++)
        {
            if(max<a[j])
            {
                max=a[j];
            }
            if(min>a[j])
            {
                min=a[j];
            }
        }
        min_dist=(max-min)*2;
        printf("%d\n",min_dist);
    }
    return 0;
}
