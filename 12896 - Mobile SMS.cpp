#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,l,a[200],b[200],j,k,p;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&l);
        for(j=0; j<l; j++)
        {
            scanf("%lld",&a[j]);
        }
        for(j=0; j<l; j++)
        {
            scanf("%lld",&b[j]);
        }
        for(j=0; j<l; j++)
        {
              if(a[j]==0&&b[j]==1)
            {
                printf(" ");
            }
          else if(a[j]==0&&b[j]>1)
          {
              for(p=1;p<=b[j];p++)
              {
                    printf(" ");
              }
          }
            else if(a[j]==1&&b[j]==1)
            {
                printf(".");
            }
            else if(a[j]==1&&b[j]==2)
            {
                printf(",");
            }
            else if(a[j]==1&&b[j]==3)
            {
                printf("?");
            }
            else if(a[j]==1&&b[j]==4)
            {
                printf("\"");
            }
            else if(a[j]==2&&b[j]==1)
            {
                printf("a");
            }
            else if(a[j]==2&&b[j]==2)
            {
                printf("b");
            }
            else if(a[j]==2&&b[j]==3)
            {
                printf("c");
            }
            else if(a[j]==3&&b[j]==1)
            {
                printf("d");
            }
            else if(a[j]==3&&b[j]==2)
            {
                printf("e");
            }
            else if(a[j]==3&&b[j]==3)
            {
                printf("f");
            }
            else if(a[j]==4&&b[j]==1)
            {
                printf("g");
            }
            else if(a[j]==4&&b[j]==2)
            {
                printf("h");
            }
            else if(a[j]==4&&b[j]==3)
            {
                printf("i");
            }
            else if(a[j]==5&&b[j]==1)
            {
                printf("j");
            }
            else if(a[j]==5&&b[j]==2)
            {
                printf("k");
            }
            else if(a[j]==5&&b[j]==3)
            {
                printf("l");
            }
            else if(a[j]==6&&b[j]==1)
            {
                printf("m");
            }
            else if(a[j]==6&&b[j]==2)
            {
                printf("n");
            }
            else if(a[j]==6&&b[j]==3)
            {
                printf("o");
            }
            else if(a[j]==7&&b[j]==1)
            {
                printf("p");
            }
            else if(a[j]==7&&b[j]==2)
            {
                printf("q");
            }
            else if(a[j]==7&&b[j]==3)
            {
                printf("r");
            }
            else if(a[j]==7&&b[j]==4)
            {
                printf("s");
            }
            else if(a[j]==8&&b[j]==1)
            {
                printf("t");
            }
            else if(a[j]==8&&b[j]==2)
            {
                printf("u");
            }
            else if(a[j]==8&&b[j]==3)
            {
                printf("v");
            }
            else if(a[j]==9&&b[j]==1)
            {
                printf("w");
            }
            else if(a[j]==9&&b[j]==2)
            {
                printf("x");
            }
            else if(a[j]==9&&b[j]==3)
            {
                printf("y");
            }
            else if(a[j]==9&&b[j]==4)
            {
                printf("z");
            }
        }
          printf("\n");
    }
     return 0;
}

