#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    int i;
    while(getline(cin,line))
    {
        for(i=0;i<line.length();i++)
        {
            if(!isalpha(line[i]))
            {
                line[i]=' ';
            }
        }
        stringstream ss(line);
        string word;
        int count = 0;
        while (ss>>word)
        {
            count++;
            //cout<<word<<endl;
        }
        cout << count<<endl;
    }
    return 0;
}
