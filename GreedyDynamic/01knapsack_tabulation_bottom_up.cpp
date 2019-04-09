#include<bits/stdc++.h>
using namespace std;

struct knapsack
{
    int profit;
    int weight;
};

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
            cin>>arr[i].profit>>arr[i].weight;
        int table[n+1][w+1];
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=w;j++)
            {
                if(i==0 || j==0)
                    table[i][j]=0;
                else if(arr[i-1].weight<=j)
                    table[i][j]=max(table[i-1][j],arr[i-1].profit+table[i-1][j-arr[i-1].weight]);
                else
                    table[i][j]=table[i-1][j];
            }
        }
        cout<<table[n][w]<<endl;
    }
    return 0;
}

