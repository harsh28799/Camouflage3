#include<bits/stdc++.h>

using namespace std;
vector <int> adj[1000];

int main()
{
    int i,j;
    int a,b;
    int edges,nodes;
    cin>>nodes>>edges;

    for(i=0;i<edges;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
    }

    int no;
    cin>>no;
    int flag[no];
    for(i=0;i<no;i++,flag[i]=0);

    for(i=0;i<no;i++)
    {
        cin>>a>>b;
        for(j=0;j<adj[a].size();j++)
        {
            if(adj[a][j]==b)
            {
                flag[i]=1;
                break;
            }
        }
    }

    for(i=0;i<no;i++)
    {
        if(flag[i]==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}

