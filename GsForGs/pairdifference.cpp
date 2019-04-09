#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int i=1;
    int ans[test];
    while(i<=test)
    {
        int j;
        int n,target;
        cin>>n>>target;
        int arr[n];
        for(j=0;j<n;j++)
            cin>>arr[j];
        sort(arr,arr+n);
        for(j=0;j<n;j++)
        {
            int val=target+arr[j];
            if(binary_search(arr,arr+n,val))
            {
                ans[i-1]=1;
                break;
            }
            else
                continue;
        }
        i++;
    }
    for(i=0;i<test;i++)
    {
        if(ans[i]==1)
            cout<<1<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
