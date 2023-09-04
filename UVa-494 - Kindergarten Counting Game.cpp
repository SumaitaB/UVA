#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int e=0,f=1,i;
    string a;
    while(getline(cin,a))
    {
        f=1;
        e=0;
        for(i=0; i<a.length(); i++)
        {
            if(isalpha(a[i]))
            {
                if(f==1)
                {
                    e++;
                }
                f=0;
            }
            else
            {
                f=1;
            }
        }
        printf("%lld\n",e);
    }
    return 0;
}
