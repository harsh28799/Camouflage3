#include<bits/stdc++.h>

#define nil -1

using namespace std;

struct knapsack
{
    int profit;
    int weight;
};

int table[100][100];

int KS(int n,int w,knapsack arr[])
{
    cout<<"KS("<<n<<","<<w<<")"<<endl;
    if(n==0 || w==0)
    {
        if(table[n][w]==nil)
            table[n][w]=0;
        return table[n][w];
    }
    else if(arr[n-1].weight>w)
    {
        if(table[n-1][w]==nil)
            table[n-1][w]=KS(n-1,w,arr);
        return table[n-1][w];
    }
    else
    {
        if(table[n-1][w]==nil)
            table[n-1][w]=KS(n-1,w,arr);
        if(table[n-1][w-arr[n-1].weight]==nil)
            table[n-1][w-arr[n-1].weight]=KS(n-1,w-arr[n-1].weight,arr);
        table[n][w]=max(table[n-1][w],arr[n-1].profit+table[n-1][w-arr[n-1].weight]);
        return table[n][w];
    }
}

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,w;
        cin>>n>>w;
        knapsack arr[n];
        int i,j;
        for(i=0;i<n;i++)
            cin>>arr[i].profit;
        for(i=0;i<n;i++)
            cin>>arr[i].weight;
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=w;j++)
            {
                table[i][j]=nil;
            }
        }
        cout<<KS(n,w,arr)<<endl;
    }
    return 0;
}
