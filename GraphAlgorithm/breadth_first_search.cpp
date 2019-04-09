#include<bits/stdc++.h>
using namespace std;

vector <int> arr[20];
vector <int> ans;
int path[20];
int dist[20];
int node,edge;

void bfs(int x)
{
    int a;
    int i;
    queue <int> q;
    for(i=0;i<node;i++)
        path[i]=-1;
    for(i=0;i<node;i++)
        dist[i]=-1;
    q.push(x);
    dist[x]=0;
    while(!q.empty())
    {
        a=q.front();
        q.pop();
        ans.push_back(a);
        for(i=0;i<arr[a].size();i++)
        {
            int b=arr[a][i];
            if(dist[b]==-1)
            {
                q.push(b);
                dist[b]=dist[a]+1;
                path[b]=a;
            }
        }
    }
}

int main()
{
    int i;
    cout<<"enter the number of nodes\n";
    cin>>node;
    cout<<"enter the number of edges\n";
    cin>>edge;

    cout<<"enter the edges\n";
    for(i=0;i<edge;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
    }

    int x;
    cout<<"enter the element you want to start the BFS from:\n";
    cin>>x;

    bfs(x);

    cout<<"Breadth first Sort:"<<"\t";
    for(i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;

    cout<<"Path array:"<<"\t";
    for(i=0;i<node;i++)
        cout<<path[i]<<" ";
    cout<<endl;

    cout<<"Distance Array:"<<"\t";
    for(i=0;i<node;i++)
        cout<<dist[i]<<" ";
    cout<<endl;

    return 0;
}
