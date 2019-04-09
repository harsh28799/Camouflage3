#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0;
    int k=0;
    int m;
    long long int ans[100000];
    while(flag==0)
    {
        int i,j;
        long long int n;
        cin>>n;
        if(n==0)
        {
            flag=1;
            continue;
        }
        long long int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        long long int total=0;
        sort(arr,arr+n);
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                long long int target=arr[i]+arr[j];
                long long int l=upper_bound(arr,arr+n,target)-arr;
                total+=(n-l);
            }
        }
        ans[k]=total;
        k++;
    }
    for(m=0;m<k;m++)
        cout<<ans[m]<<endl;
}
