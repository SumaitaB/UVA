#include<stdio.h>
#include<math.h>
int main()
{
    int h1,h2,m1,m2;
    int hour,minute;

    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2)!=EOF)
    {
        if(h1==0&&m1==0&&h2==0&&m2==0)
        {
            break;
        }
        else
        {
            hour = h2-h1;
            minute = m2-m1;
            if(minute<0)
            {
                minute = minute+60;
                hour = hour-1;
            }
            if(hour<0)
                {hour = hour+24;}
        }

        hour = hour*60+minute;
        printf("%d\n",hour);
    }
    return 0;
}
