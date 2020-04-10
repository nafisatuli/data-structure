#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;
pair <int,int> p;
priority_queue<pair<int ,int > > q;
vector <int> v[1000];
int cont=1,vist[1000];
void dfs(int node)
{
	vist[node] = 1;
	for(int i=0;i<v[node].size();i++)
	{
		int temp = v[node][i];
		if(vist[temp]==0)
			cont++,dfs(temp);
	}
	q.push(make_pair(/*count wise sorted*/cont,node)),cont++;
}
int main()
{
	int n,e;
	cin >> n >> e;
	for(int i=1;i<=e;i++)
	{
		int from,to;
		cin >> from >> to;
		v[from].push_back(to);
	}
	for(int i=1;i<=n;i++) if(vist[i]==0) dfs(i);
	while(!q.empty()) cout <<"Value = " <<q.top().first << " node = " << q.top().second << endl,q.pop();
}
