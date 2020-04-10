#include<stdio.h>
#define mx 100
int arr[50][50],v,e;
int s[100],top=0;
bool visited[100];
void take_input()
{
    int i,v,e,a,b;
    int arr[10][10]={0};
    printf("Enter number of vertex and edge: ");
    scanf("%d %d",&v,&e);
    for(i=1;i<=e;i++)
    {
        scanf("%d %d",&a,&b);
        arr[a][b]=arr[b][a]=1;
    }
}
int is_empty()
{
    if(top<0)
        return 0;
    else
        return 1;
}
int pop()
{
    if(top<0)
        return -1;
    return s[--top];
}
void push(int item)
{
    if(top==mx)
        printf("Overflow\n");
    s[top]=item;
    top=top+1;
}
void dfs(int start)
{
    push(start);
    while(is_empty()==1)
    {
        int j;
        int n=pop();
        visited[n]=true;
        printf("%d ",n);
        for(j=1;j<=v;j++)
        {
            if(arr[n][j]==1 && !visited[j])
            {
                push(j);
                visited[j]=true;
            }
        }
    }
}
int main()
{
    int start;
    take_input();
    printf("where to start from? ");
    scanf("%d",&start);
    dfs(start);
    return 0;
}
