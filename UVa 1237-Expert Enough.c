#include<stdio.h>
int main()
{
    char m[1000][100];
    int t,l[100],h[100],i,d,q,price,f,j,k,s,r=0,R=0;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        r=0;
        R=0;
        scanf("%d",&d);
        for(j=0; j<d; j++)
        {
            for(s=0; s<d; s++)
            {
                m[j][s]='\0';
            }
        }
        for(j=0; j<d; j++)
        {
            scanf("%s%d%d",&m[j],&l[j],&h[j]);
        }
        scanf("%d",&q);
        for(k=0; k<q; k++)
        {
            scanf("%d",&price);
            if(price>=l[k]&&price<=h[k])
                count++;
        }
        r=0;
        R=0;
        for(j=0; j<q; j++)
        {r=0;
            for(f=0; f<d; f++)
            {
                if(p[j]>l[f]&&p[j]<=h[f])
                {
                    printf("%s\n",m[f]);
                    r=1;
                    break;
                }
            }
            if(r!=1)
            {
                printf("UNDETERMINED\n");
            }
        }
    }
    return 0;
}
