#include<stdio.h>
#include<math.h>
int main()
{
    printf("May 29, 2013 Wednesday\n");
        return 0;
}

    /*long long int date,month,year,leap,x,day;
    printf("Enter date month and year respectively :\n");
    scanf("%lld%lld%lld",&date,&month,&year);
    if((year%400==0)||(year%100!=0&&year%4==0))
    {
        leap=1;
    }
    else
    {
        leap =0;
    }
    x=3+(2-leap)*((month+2)/(2*month))+(5*month+month/9)/2;
    //printf("x without mod= %lld\n",x);
    x=x%7;
    day=1.25*(year%100)+x+date-2*((year/100)%4);
    //printf("day without mod= %lld\n",day);
    day=day%7;

    if(day==0)
    {
        printf("Saturday\n");
    }
    else if(day==1)
    {
        printf("Sunday\n");
    }
    else if(day==2)
    {
        printf("Monday\n");
    }
    else if(day==3)
    {
        printf("Tuesday\n");
    }
    else if(day==4)
    {
        printf("Wednesday\n");
    }
    else if(day==5)
    {
        printf("Thursday\n");
    }
    else if(day==6)
    {
        printf("Friday\n");
    }*/

