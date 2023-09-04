#include<bits/stdc++.h>
using namespace std;
char a[100000+9],b[100000+9];
int main()
{

    long long int i,j,x=0,c=0,lena;
    while((scanf("%s%s",&a,&b))!=EOF)
    {
        c=0;
        x=0;
        lena=strlen(a);
        for(j=0; j<strlen(a);j++)
        {
            for(i=x; i<strlen(b);i++)
            {
                if(a[j]==b[i])
                {
                    c++;
                    x=i+1;
                    break;
                }
            }
        }
        if(lena==c)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}



