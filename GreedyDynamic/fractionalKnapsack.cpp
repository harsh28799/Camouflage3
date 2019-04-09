#include<bits/stdc++.h>
using namespace std;

struct knapsack
{
    float profit;
    float weight;
    float part=0.0;
};

bool compare(knapsack a, knapsack b)
{
    return ((a.profit/a.weight)>(b.profit/b.weight));
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
        int i;
        for(i=0;i<n;i++)
            cin>>arr[i].profit>>arr[i].weight;
        sort(arr,arr+n,compare);
        float profit=0.0;
        float load=0.0;
        i=0;
        while(i<n && load<w)
        {
            if(arr[i].weight+load<=w)
            {
                arr[i].part=1;
                load+=arr[i].weight;
                profit+=arr[i].profit;
            }
            else
            {
                float rem=w-load;
                arr[i].part=rem/arr[i].weight;
                load=w;
                profit+=arr[i].part*arr[i].profit;
            }
            i++;
        }
        cout<<fixed<<setprecision(2)<<profit<<endl;
    }
    return 0;
}
