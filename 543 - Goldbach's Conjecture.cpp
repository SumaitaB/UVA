#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int count=1;
        int x=1;
        while(1)
        {
            if(x%n==0)break;
            x=(x*10)+1;
            x=x%n;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
