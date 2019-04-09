#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int ans[test];
    int i=1;
    while(i<=test)
    {
        int j;
        vector <long> arr1;
        vector <long> arr2;
        int m,n;
        cin>>m>>n;
        for(j=0;j<m;j++)
        {
            long a;
            cin>>a;
            arr1.push_back(a);
        }
        for(j=0;j<n;j++)
        {
            long a;
            cin>>a;
            arr2.push_back(a);
        }
        sort(arr1.begin(),arr1.end());
        int flag=0;
        for(j=0;j<n;j++)
        {
            long val=arr2.back();
            arr2.pop_back();
            if(binary_search(arr1.begin(),arr1.end(),val))
                continue;
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            ans[i-1]=1;
        else
            ans[i-1]=0;
        i++;
    }
    for(i=0;i<test;i++)
    {
        if(ans[i]==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
