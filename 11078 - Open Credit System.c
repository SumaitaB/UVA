#include<stdio.h>
int main()
{
    int t,i,n,j,diff[100010],p,x1,x,max=-99999;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        max=-99999;
        scanf("%d",&n);
        scanf("%d",&x1);
        for(j=0;j<n-1;j++)
        {
           scanf("%d",&x);
           diff[j]=x1-x;

            if(diff[j]>max)
            {
                max=diff[j];
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
