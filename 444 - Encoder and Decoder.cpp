#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int s,p,i,q,g,sum=0,r;
    while(getline(cin,a))
    {
//        if(a[0]>='0' && a[0]<='9')
//        {
//            //decode
//            for(i=(a.length()-1); i>=0 ; i--)
//            {
//
//                s=0;
//                s+=(a[i]-48);
//                s=0;
//                s+=(a[i]-48);
//                while(g)
//                {
//                    q=g%10;
//                    sum=(sum*10)+q;;
//                    g=g/10;
//                }
//                printf("%c",sum);
//            }
//        }
//        else
//        {
        //encode
        string encode;
        for(i=0; i<a.length(); i++)
        {
            s=0;
            s=a[i];
            printf("%c",s+48);//
           // encode.push_back(s);

        }
//        for(i=encode.size()-1; i>=0; i--)
//        {
//            printf("%d",encode[i]);//cout<<endl;
//        }

//        }

    }
    return 0;
}
