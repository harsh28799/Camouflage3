#include<bits/stdc++.h>
using namespace std;

vector <int> adj[10];
int arr[10];

int depth_first_search(int num)
{
    int i;
    int val;
    arr[num-1]=1;
    cout<<num<<" ";
    for(i=0;i<adj[num].size();i++)
    {
        val=adj[num][i];
        if(arr[val-1]==0)
            depth_first_search(val);
    }
    return 0;
}

int main()
{
    int i,j;
    int a,b;
    int nodes,edges;
    cin>>nodes>>edges;

    for(i=0;i<nodes;i++)
        arr[i]=0;

    for(i=0;i<edges;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
    }
    for(i=1;i<=nodes;i++)
    {
        cout<<"Adjacent nodes of "<<i<<" :";
        for(j=0;j<adj[i].size();j++)
        {
                cout<<"-->"<<adj[i][j];
        }
        cout<<endl;
    }
    cin>>a;
    depth_first_search(a);
    return 0;
}
