#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x1,x2,y1,y2,z;
    while(cin>>x1>>y1>>x2>>y2)
    {
        z=((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));
        z=z/6.00;
        cout<<fixed<<setprecision(11)<<z<<endl;
    }
    return 0;
}

