#include<bits/stdc++.h>
using namespace std;
int aa[100][100];
int visit[100],st[100],nd[100],endd[100];
int n,e,c=1;
void sortt()
{
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(endd[j]<endd[j+1])
            {
                swap(endd[j],endd[j+1]);
                swap(st[j],st[j+1]);
                swap(nd[j],nd[j+1]);
            }
        }
    }
    cout << "Topological sort::\t";
    for(int i=1;i<=n;i++)
    {
        cout << nd[i] << "\t" ;
    }

}
void dfs(int s)
{
    if(visit[s]==1)return;
    visit[s]=1;
    st[s]=c;
    cout << s << " " << endl;
    for(int i=1;i<=n;i++)
    {
        if(aa[s][i]==1)
        {
            st[s]=c++;
            dfs(i);
        }
    }
    endd[s]=c++;
}
int main()
{
    int u,v;
    cout << "Nodes & Edges::" << endl;
    cin >> n >> e;
    for(int i=1;i<=e;i++)
    {
        cin >> u >> v;
        aa[u][v]=1;
    }
    cout << "Connections in adjacent matrix::" << endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout << aa[i][j] << " ";
        }
        cout << endl;
    }
    for(int i=1;i<=n;i++)
    {
        if(visit[i]==0)
        {
            dfs(i);
            st[i]=c++;
        }
    }
    for(int i=1;i<=n;i++)
    {
        nd[i]=i;
    }
    sortt();
}
