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
        int n;
        cin>>n;
        int arr[n+2];
        arr[0]=0;
        arr[n+1]=0;
        for(j=1;j<=n;j++)
            cin>>arr[j];
        int l=0,r=n+1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            int a=arr[mid-1];
            int b=arr[mid];
            int c=arr[mid+1];
            if(b>a&&b>c)
            {
                ans[i-1]=b;
                break;
            }
            else if(a>b&&b>c)
                r=mid-1;
            else if(a<b&&b<c)
                l=mid+1;
            else
            {
                ans[i-1]=0;
                break;
            }
        }
        i++;
    }
    for(i=0;i<test;i++)
        cout<<ans[i]<<endl;
    return 0;
}
