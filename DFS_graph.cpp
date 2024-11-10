#include<iostream>
#define MAX 100
using namespace std;

void add(int a[MAX][MAX],int u,int v)
{
    a[u][v]=1;
    a[v][u]=1;
}
void DSFrec(int a[MAX][MAX],int v,int s,bool visited[MAX])
{
    visited[s]=true;
    cout<<s<<" ";
    for(int i=0;i<v;i++)
    {
      if(a[s][i]==1 && !visited[i])
      {
          DSFrec(a,v,i,visited);
      }
    }
}
void DFS(int a[MAX][MAX],int v,int s)
{
    bool visited[MAX]={false};
    DSFrec(a,v,s,visited);
}
int main()
{
    int v,e,a[MAX][MAX],u,t;
    cout<<"Enter the no of vertices:";
    cin>>v;
    cout<<"Enter the no of edges:";
    cin>>e;
    for(int i=0;i<e;i++)
    {
        cin>>u>>t;
        add(a,u,t);
    }
    cout<<"Enter the source element:";
    cin>>t;
    DFS(a,v,t);
}