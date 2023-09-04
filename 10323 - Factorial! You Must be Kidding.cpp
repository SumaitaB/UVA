#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    long long int n,i,j,h=1,p;

    while (cin>>n)
    {

        if(n<0)
        {
            if(n%2==0)
            {
                cout<<"Underflow!"<<endl;
            }
            else
            {
                cout<<"Overflow!"<<endl;
            }
        }

        else if(n>=0&&n<=7)
        {
            cout<<"Underflow!"<<endl;
        }
        else if(n<=13)
        {

            h=1;
            p=n;
            for(j=1; j<=p; j++)
            {
                h=h*n;
                n--;
            }
            cout<<h<<endl;

        }
         else if(n>13)
        {
            cout<<"Overflow!"<<endl;
        }
    }

    return 0;
}
