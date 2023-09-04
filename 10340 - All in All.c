#include<stdio.h>
#include<string.h>
int main()
{
    long long int i,j,x,y,count,p;
    char a[100000],b[100000];
    while(scanf("%s%s",&a,&b)!=EOF)
    {
        count=0;
        p=0;
        x=strlen(a);
        y=strlen(b);
        if(x>y)
        {
            for(i=0; i<y; i++)
            {
                for(j=p; j<x; j++)
                {
                    if(b[i]==a[j])
                    {
                        count++;
                        p=j+1;
                        break;
                    }
                }
            }
            if(count==y)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }

        }
        else
        {
            for(i=0; i<x; i++)
            {
                for(j=p; j<y; j++)
                {
                    if(b[j]==a[i])
                    {
                        count++;
                        p=j+1;
                        break;
                    }
                }
            }
            if(count==x)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }

        }
    }
    return 0;
}




