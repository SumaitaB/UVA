#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n,t1,t2,f,att,j,i,ct1,ct2,ct3,c,d=0;;
    scanf("%d",&n);

        for(i=1; i<=n; i++)
        {
            d=0,c=0;
            ct1=0;
            ct2=0;
            ct3=0;
            scanf("%d%d%d%d",&t1,&t2,&f,&att);
            scanf("%d%d%d",&ct1,&ct2,&ct3);
            if(ct1<=ct2 && ct1<=ct3)
            {
                c=(ct2+ct3)/2;
            }
            else if(ct2<=ct1 && ct2<=ct3)
            {
                c=(ct1+ct3)/2;
            }
            else if(ct3<=ct2 && ct3<=ct1)
            {
                c=(ct2+ct1)/2;
            }
            d=(t1+t2+f+att+c);
            if(d>=90)
            {
                printf("Case %d: A\n",i);
            }
            else if(d>=80)
            {
                printf("Case %d: B\n",i);
            }
            else if(d>=70)
            {
                printf("Case %d: C\n",i);
            }
            else if(d>=60)
            {
                printf("Case %d: D\n",i);
            }
            else if(d<60)
            {
                printf("Case %d: F\n",i);
            }

        }
    return 0;
}
