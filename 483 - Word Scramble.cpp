#include<bits/stdc++.h>
using namespace std;
string a;
int main()
{

    long long int i,j;
    while(getline(cin,a))
    {
        string b="";
        for(j=0; j<a.length(); j++)
        {

            if(a[j]==' ')
            {

                reverse(b.begin(),b.end());
                cout<<b;
                if(j!=(a.length()-1))
                {
                    cout<<" ";
                }
                b.clear();
            }
            else
            {
                b.push_back(a[j]);
            }


        }
        reverse(b.begin(),b.end());
        cout<<b;
        cout<<endl;

    }
    return 0;
}



