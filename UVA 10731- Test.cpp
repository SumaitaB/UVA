#include<bits/stdc++.h>
using namespace std;

int n, Count, Low[35], Number[35],Index[105];
bool cnt[35][35], Free[35];
char Name[35];
vector<string> ans;
stack<int> S;

void Init()
{

    for(int i=1; i<35; i++)
    {
        memset(cnt[i], false, 35);
        Number[i] = 0;
        Free[i] = true;
    }
    for(int i='A'; i<='Z'; i++)
    {
        Index[i] = 0;
    }
    Count = n = 0;
    S = stack<int>();
    ans.clear();
}

void Visit(int u)
{
    S.push(u);
    Number[u] = Low[u] = ++Count;
    for(int v=1; v<=n; v++)
        if (Free[v] && cnt[u][v])
        {
            if (Number[v]) Low[u] = min(Low[u], Number[v]);
            else
            {
                Visit(v);
                Low[u] = min(Low[u], Low[v]);
            }
        }
    if (Low[u]==Number[u])
    {
        int v;
        string tmp = "";
        do
        {
            v = S.top();
            S.pop();
            Free[v] = false;
            tmp += Name[v];
        }
        while (v!=u);
        sort(tmp.begin(), tmp.end());
        ans.push_back(tmp);
    }
}

int main()
{

    char c[7], ch;
    int x[7], u, m;
    bool Line = false;
    while (scanf("%d", &m) && m)
    {
        Init();
        while (m--)
        {
            for(int i=1; i<=5; i++)
            {
                scanf(" %c ", &c[i]);
                x[i] = Index[c[i]];
                if (x[i]==0)
                {
                    x[i] = Index[c[i]] = ++n;
                    Name[x[i]] = c[i];
                }
            }
            scanf(" %c ", &ch);
            u = Index[ch];
            if (u==0)
            {
                u = Index[ch] = ++n;
                Name[u] = ch;
            }
            for(int i=1; i<=5; i++)
                cnt[u][x[i]] = true;
        }

        for(int i=1; i<=n; i++)
            if (Number[i]==0) Visit(i);
        sort(ans.begin(), ans.end());

        if (Line) printf("\n");
        Line = true;
        for (int i=0; i<ans.size(); i++)
        {
            int len = ans[i].length();
            printf("%c", ans[i][0]);
            for (int j=1; j<len; j++)
                printf(" %c", ans[i][j]);
            printf("\n");
        }
    }
}
