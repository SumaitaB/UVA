#include<stdio.h>
int main()
{
    int i;
    char a[10];
    for(i=1;; i++)
    {
        scanf("%s",&a);
        if(a[0]=='H')
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
        }
        else if(a[0]=='U')
        {
            printf("Case %d: Hajj-e-Asghar\n",i);
        }
        if(a[0]=='*')break;

    }
    return 0;
}
