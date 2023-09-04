#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int i,y,x;
    double n,a[10000],c=0,p,flag=0,s=0,t;
    cin>>t;
    for(y=1;y<=t;y++)
    {
        cin>>n;
        flag=0;
        i=1;
        c=0;
        p=1;
        x=n;
        s=0;
        while(x!=0)
        {
            a[i]=x%10;
            x=x/10;
            i++;
            c++;
        }
        while(1)
        {
            s=0;
            for(i=1; i<=c; i++)
            {
                s+=pow(a[i],p);

            }
            p++;
            if(s==n)
            {
                flag=1;
                break;
            }
            else if(s>n)break;
        }
        if(flag==1)
        {
            printf("Armstrong\n");
        }
        else
        {
            printf("Not Armstrong\n");
        }

    }
    return 0;
}
