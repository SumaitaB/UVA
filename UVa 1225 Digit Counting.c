#include <stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, i, j, k;

        int a[25]= {0};

        scanf("%d", &n);
        for(i=1; i<=n; i++)
        {
            j = i;
            while(j!=0)
            {
                k=j%10;
                a[k]++;
                j=j/10;
            }
        }
        for(i=0; i<9; i++)
        {
            printf("%d ", a[i]);
        }

        printf("%d\n", a[9]);
    }
    return 0;
}
