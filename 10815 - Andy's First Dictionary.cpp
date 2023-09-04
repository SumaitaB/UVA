#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,s[10009];

    map <string,int>m;
    map <string,int>::iterator it;

    int j=0;

    while(getline(cin,a))
    {
        for(int i=0; i<a.length(); i++)
        {
            if(a[i]>='A'&&a[i]<='Z')
            {
                a[i]=a[i]+32;
            }
            else if(!isalpha(a[i]))
            {
                a[i]=' ';
            }
        }

        string word;
        stringstream ss(a);
        while(ss>>word)
        {
            it=m.find(word);
            if(it==m.end())
            {
                m.insert(make_pair(word,1));
                s[j]=word;
                j++;
            }

        }

        sort(s+0,s+j);

    }


    for(int q=0; q<j; q++)
    {
        cout<<s[q]<<endl;
    }
    return 0;
}
