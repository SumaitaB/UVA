#include<stdio.h>
#include<string.h>
int main()
{
    long long int count=0,x,i,t,j;
    char a[150];
    scanf("%lld",&t);
    getchar();
    for(j=1; j<=t; j++)
    {

        count=0;
        gets(a);
        x=strlen(a);
        for(i=0; i<x; i++)
        {

           if((a[i]=='a')||(a[i]=='d')||(a[i]=='g')||(a[i]=='j')||(a[i]=='m')||(a[i]=='p')||(a[i]=='t')||(a[i]=='w')||(a[i]==32))
            {
                count++;
            }
            else if((a[i]=='b')||(a[i]=='e')||(a[i]=='h')||(a[i]=='k')||(a[i]=='n')||(a[i]=='q')||(a[i]=='u')||(a[i]=='x'))
            {
                count+=2;
            }
            else if((a[i]=='c')||(a[i]=='f')||(a[i]=='i')||(a[i]=='l')||(a[i]=='o')||(a[i]=='r')||(a[i]=='v')||(a[i]=='y'))
            {
                count+=3;
            }
            else if((a[i]=='s')||(a[i]=='z'))
            {
                count+=4;
            }
        }
        printf("Case #%lld: %lld\n",j,count);

    }
    return 0;
}

