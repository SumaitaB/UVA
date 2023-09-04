#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,j,a,b,c,x,y,z;

    while(1)
    {
        cin>>a>>b>>c;
        if(a==0&&b==0&&c==0)break;
        x=a*a;
        y=b*b;
        z=c*c;

        if(((a+b)>c)&&((b+c)>a)&&((a+c)>b))
        {
            if((x+y==z)||(y+z==x)||(z+x==y))
            {
                cout<<"right"<<endl;
            }
            else
            {
                cout<<"wrong"<<endl;
            }
        }
        else
        {
            cout<<"wrong"<<endl;
        }
    }

    return 0;
}
