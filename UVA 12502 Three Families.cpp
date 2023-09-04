
#include<stdio.h>
int main()
{
    int t,x,y,z,a,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        a=z*((2*x)-y)/(x+y);
            if(a<=0)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n",a);
        }

    }
    return 0;

}
