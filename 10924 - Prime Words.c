#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long long int i,sum=0,j,count=0,x;
    char a[30];
    while(scanf("%s",&a)!=EOF)
    {
        sum=0;
        count=0;
        x=strlen(a);
        for(i=0; i<x; i++)
        {
            switch(a[i])
            {
            case 'a':
                sum++;
                break;
            case 'b':
                sum+=2;
                break;
            case 'c':
                sum+=3;
                break;
            case 'd':
                sum+=4;
                break;
            case 'e':
                sum+=5;
                break;
            case 'f':
                sum+=6;
                break;
            case 'g':
                sum+=7;
                break;
            case 'h':
                sum+=8;
                break;
            case 'i':
                sum+=9;
                break;
            case 'j':
                sum+=10;
                break;
            case 'k':
                sum+=11;
                break;
            case 'l':
                sum+=12;
                break;
            case 'm':
                sum+=13;
                break;
            case 'n':
                sum+=14;
                break;
            case 'o':
                sum+=15;
                break;
            case 'p':
                sum+=16;
                break;
            case 'q':
                sum+=17;
                break;
            case 'r':
                sum+=18;
                break;
            case 's':
                sum+=19;
                break;
            case 't':
                sum+=20;
                break;
            case 'u':
                sum+=21;
                break;
            case 'v':
                sum+=22;
                break;
            case 'w':
                sum+=23;
                break;
            case 'x':
                sum+=24;
                break;
            case 'y':
                sum+=25;
                break;
            case 'z':
                sum+=26;
                break;
            case 'A':
                sum+=27;
                break;
            case 'B':
                sum+=28;
                break;
            case 'C':
                sum+=29;
                break;
            case 'D':
                sum+=30;
                break;
            case 'E':
                sum+=31;
                break;
            case 'F':
                sum+=32;
                break;
            case 'G':
                sum+=33;
                break;
            case 'H':
                sum+=34;
                break;
            case 'I':
                sum+=35;
                break;
            case 'J':
                sum+=36;
                break;
            case 'K':
                sum+=37;
                break;
            case 'L':
                sum+=38;
                break;
            case 'M':
                sum+=39;
                break;
            case 'N':
                sum+=40;
                break;
            case 'O':
                sum+=41;
                break;
            case 'P':
                sum+=42;
                break;
            case 'Q':
                sum+=43;
                break;
            case 'R':
                sum+=44;
                break;
            case 'S':
                sum+=45;
                break;
            case 'T':
                sum+=46;
                break;
            case 'U':
                sum+=47;
                break;
            case 'V':
                sum+=48;
                break;
            case 'W':
                sum+=49;
                break;
            case 'X':
                sum+=50;
                break;
            case 'Y':
                sum+=51;
                break;
            case 'Z':
                sum+=52;
                break;

            }
        }
        for(i=1; i<=sum; i++)
        {
            if(sum%i==0)
            {
                count++;
            }
        }
        if(count==2||sum==1)
        {
            printf("It is a prime word.\n");
        }
        else
        {
            printf("It is not a prime word.\n");
        }
    }
    return 0;
}


