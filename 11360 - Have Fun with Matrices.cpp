#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t,i,j,x=0,y=0,p=0,m,n,op;
    cin>>t;
    string a,s;
    for( m=1; m<=t; m++)
    {
        vector <int> matrix[15];
        cin>>n;
        cin.ignore();
        for(i=0; i<n; i++)
        {
            cin>>s;
            int len=s.size();
            for(j=0; j<n; j++)
            {
                p=s[j]-'0';
                matrix[i].push_back(p);
            }
        }
        cin>>op;
        cin.ignore();
        for(int g=1; g<=op; g++)
        {

            cin>>a;
            if(a=="transpose")
            {
                vector <int> v[15];
                for(i=0; i<n; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        v[j].push_back(matrix[i][j]);
                    }
                }
                for(i=0; i<n; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        matrix[i][j]=v[i][j];
                    }
                }

            }
            else if(a=="row")
            {
                cin>>x>>y;
                for(i=0; i<n; i++)
                {
                    swap(matrix[y-1][i],matrix[x-1][i]);
                }
            }
            else if(a=="col")
            {
                cin>>x>>y;
                for(i=0; i<n; i++)
                {
                    swap(matrix[i][x-1],matrix[i][y-1]);
                }
            }
            else if(a=="inc")
            {
                for(i=0; i<n; i++)
                {
                    for(j=0; j<n; j++)
                    {

                        matrix[i][j]=(matrix[i][j]+1)%10;
                    }
                }
            }
            else if(a=="dec")
            {
                for(i=0; i<n; i++)
                {
                    for(j=0; j<n; j++)
                    {

                        matrix[i][j]=(matrix[i][j]-1);
                        if(matrix[i][j]==-1)
                        {
                            matrix[i][j]=9;
                        }
                    }
                }
            }

            a.clear();
        }

        cout<<"Case #"<<m<<endl;
        for(int h=0; h<n; h++)
        {
            for(int u=0; u<n; u++)
            {
                cout<<matrix[h][u];
            }

            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
