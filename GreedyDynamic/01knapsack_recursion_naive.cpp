#include<bits/stdc++.h>
using namespace std;

struct knapsack
{
    int profit;
    int weight;
};

int KS(int n,int w,knapsack arr[])
{
    if(n==0 || w==0)
        return 0;
    else if(arr[n-1].weight>w)
        return KS(n-1,w,arr);
    else
        return max(KS(n-1,w,arr),arr[n-1].profit+KS(n-1,w-arr[n-1].weight,arr));
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
            cin>>arr[i].profit>>arr[i].weight;
        cout<<KS(n,w,arr)<<endl;
    }
    return 0;
}
