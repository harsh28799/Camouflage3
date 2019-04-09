#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int arr[n];
    int i,j,k;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector <long long int> arr1;
    vector <long long int> arr2;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                long long int a=(arr[i]*arr[j])+arr[k];
                arr1.push_back(a);
                if(arr[k]!=0)
                {
                    long long int b=(arr[i]+arr[j])*arr[k];
                    arr2.push_back(b);
                }
            }
        }
    }
    sort(arr2.begin(),arr2.end());
    long long int ans=0;
    while(!arr1.empty())
    {
        long long int target=arr1.back();
        arr1.pop_back();
        long long int l=lower_bound(arr2.begin(),arr2.end(),target)-arr2.begin();
        long long int r=upper_bound(arr2.begin(),arr2.end(),target)-arr2.begin();
        ans+=(r-l);
    }
    cout<<ans;
}
