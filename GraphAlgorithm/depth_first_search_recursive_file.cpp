#include<iostream>
#include<fstream>
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
    int str;
    string name;
    cout<<"enter the name of the file:"<<endl;
    cin>>name;
    fstream myfile;
    myfile.open(name,ios::in|ios::out|ios::app);
    myfile.seekg(0,ios::beg);

    int i,j;
    int a,b;
    int nodes,edges;

    myfile>>str;
    nodes=str;
    myfile>>str;
    edges=str;

    for(i=0;i<nodes;i++)
        arr[i]=0;

    for(i=0;i<edges;i++)
    {
        myfile>>str;
        a=str;
        myfile>>str;
        b=str;

        adj[a].push_back(b);
    }

    myfile.close();

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
