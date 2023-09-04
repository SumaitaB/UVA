#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,x=0,y=0,r=0,c=0;
    int matrix[105][105];
    vector<int>rsum;
    vector<int>csum;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        for(i=0; i<n; i++)
        {
            r=0;
            c=0;

            for(j=0; j<n; j++)
            {

                r+=matrix[i][j];
                c+=matrix[j][i];

            }
            rsum.push_back(r);
            csum.push_back(c);
        }
        int f1=0;
        int f2=0;
        for(i=0; i<n; i++)
        {
            if(rsum[i]%2==1)
            {
                x=i;
                f1++;
            }
            if(csum[i]%2==1)
            {
                y=i;
                f2++;
            }
        }
        if(f1==0&&f2==0)
        {
            cout<<"OK"<<endl;
        }
        else if(f1==1&&f2==1)
        {
            cout<< "Change bit (" << x+1 << "," <<y+1<< ")" <<endl;
        }
        else
        {
            cout<<"Corrupt"<<endl;
        }
        rsum.clear();
        csum.clear();
    }
    return 0;
}
