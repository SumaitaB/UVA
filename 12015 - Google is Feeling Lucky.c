#include<stdio.h>
#include<string.h>
int main()
{
    long long int t,q,max=-9999,p[12],x;
    char a[110],b[110],c[110],d[110],e[110],f[110],g[110],h[110],i[110],j[110];
    scanf("%lld",&t);
    for(x=1; x<=t; x++)
    {
        max=-9999;
        scanf("%s%lld",&a,&p[0]);
        scanf("%s%lld",&b,&p[1]);
        scanf("%s%lld",&c,&p[2]);
        scanf("%s%lld",&d,&p[3]);
        scanf("%s%lld",&e,&p[4]);
        scanf("%s%lld",&f,&p[5]);
        scanf("%s%lld",&g,&p[6]);
        scanf("%s%lld",&h,&p[7]);
        scanf("%s%lld",&i,&p[8]);
        scanf("%s%lld",&j,&p[9]);
        for(q=0; q<10; q++)
        {
            if(max<p[q])
            {
                max=p[q];
            }
        }
printf("Case #%lld:\n",x);
        for(q=0; q<10; q++)
        {
            if(max==p[q])
            {
                if(q==0)
                {
                    printf("%s\n",a);
                }
                else if(q==1)
                {
                    printf("%s\n",b);
                }
                else if(q==2)
                {
                    printf("%s\n",c);
                }
                else if(q==3)
                {
                    printf("%s\n",d);
                }
                else if(q==4)
                {
                    printf("%s\n",e);
                }
                else if(q==5)
                {
                    printf("%s\n",f);
                }
                else if(q==6)
                {
                    printf("%s\n",g);
                }
                else if(q==7)
                {
                    printf("%s\n",h);
                }
                else if(q==8)
                {
                    printf("%s\n",i);
                }
                else if(q==9)
                {
                    printf("%s\n",j);
                }
            }
        }
    }

return 0;
}



