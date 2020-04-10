#include<bits/stdc++.h>
using namespace std;
int rear=1,front=1,k=1;
int n,x,y,e,F;
int aa[100][100]= {},vis[10000]= {},dist[10000]= {},Q[10000],f;


void push(int item)
{
    Q[rear]=item;
    rear++;
}

int pop()
{
    F=Q[front];
    front++;
}

//bool empty()
//{
//    if(rear==front) return 0;
//    else return 1;
//}

int bfs(int begin,int end)
{
    push(begin);
    vis[begin]=1;
    dist[begin]=0;
    while( front != rear )
    {
        pop();
        cout<<"f = "<<F<<endl;
        getchar();
        for(int i=1; i<=n; i++)
        {
            if(aa[F][i]==1 && vis[i]==0)
            {
                push(i);
                dist[i]=dist[F]+1;
                vis[i]=1;
            }
        }
    }

}



int main()
{
    int begin,end;
    cin >> n >> e;
    while(e--)
    {
        cin >> x >> y;
        aa[x][y]=1;
    }
    cin >> begin >> end;
    bfs(begin,end);
    cout << dist[end] << endl;
}
