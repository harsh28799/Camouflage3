//#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

vector <int> adj[10];

int main()
{
    int i,j;
    int a,b;
    int edges,nodes;
    cin>>nodes>>edges;
    //vector <int> adj[nodes];
    for(i=0;i<edges;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
    }
    for(i=1;i<=nodes;i++)
    {
        cout<<"Adjacent list of "<<i<<" :";
        for(j=0;j<adj[i].size();j++)
        {
            if(j==(adj[i].size()-1))
                cout<<adj[i][j]<<endl;
            else
                cout<<adj[i][j]<<"-->";
        }
    }
    return 0;
}
