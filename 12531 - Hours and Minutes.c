#include<stdio.h>
#include<math.h>
int main()
{
    long long int a;
    while(scanf("%lld",&a)!=EOF)
    {
        if(a%6==0) printf("Y\n");
        else printf("N\n");

    }
    return 0;
}


