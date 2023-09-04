#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,flag1=1,flag2=1,x,j;

    cin>>n;
    cout<<"Lumberjacks:"<<endl;
    while(n--)
    {
        vector<int>v;
        vector<int>va;
        vector<int>vd;

        flag1=1;
        flag2=1;

        for(i=0; i<10; i++)
        {
            cin>>x;
            v.push_back(x);
            va.push_back(x);
            vd.push_back(x);

        }

        sort(va.begin(),va.end());
        sort(vd.begin(),vd.end());

        for(i=0; i<10; i++)
        {
            if(va[i]!=v[i])
            {
                flag1=0;break;
            }
        }

        for(i=9,j=0; i>=0; i--,j++)
        {
            if(vd[i]!=v[j])
            {
                flag2=0;
                break;
            }
        }
        if(flag2==1||flag1==1)
        {
            cout<<"Ordered"<<endl;
        }
        else
        {
            cout<<"Unordered"<<endl;
        }
        v.clear();
        va.clear();
        vd.clear();
    }
    return 0;
}
