#include<bits/stdc++.h>
using namespace std;

int maximum(long arr[],int n,long target)
{
    long l=0;
    long r=n-1;
    long max=arr[r];
    while(l<=r)
    {
        long mid=(l+r)/2;
        if(arr[mid]==target)
        {
            max=target;
            break;
        }
        else if(arr[mid]>target)
        {
            max=arr[mid];
            r=mid-1;
        }
        else
            l=mid+1;
    }
    return max;
}

int minimum(long arr[],int n,long target)
{
    long l=0;
    long r=n-1;
    long min=arr[0];
    while(l<=r)
    {
        long mid=(l+r)/2;
        if(arr[mid]==target)
        {
            min=target;
            break;
        }
        else if(arr[mid]>target)
            r=mid-1;
        else
        {
            min=arr[mid];
            l=mid+1;
        }
    }
    return min;
}

int main()
{
    int test;
    cin>>test;
    long ans[test];
    int i=1;
    while(i<=test)
    {
        int j;
        long n,target;
        cin>>n>>target;
        long a[n];
        for(j=0;j<n;j++)
            cin>>a[j];
        int max=maximum(a,n,target);
        int min=minimum(a,n,target);
        if((max-target)==(target-min))
            ans[i-1]=max;
        else if((max-target)<(target-min))
            ans[i-1]=max;
        else
            ans[i-1]=min;
        i++;
    }
    for(i=0;i<test;i++)
        cout<<ans[i]<<endl;
    return 0;
}
