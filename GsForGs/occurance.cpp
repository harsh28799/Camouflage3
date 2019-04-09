#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int i=1;
    int ans[test][2];
    while(i<=test)
    {
        int j;
        int n,target;
        cin>>n>>target;
        vector <int> arr;
        for(j=0;j<n;j++)
        {
            int a;
            cin>>a;
            arr.push_back(a);
        }
        if(binary_search(arr.begin(),arr.end(),target))
        {
            int first=lower_bound(arr.begin(),arr.end(),target)-arr.begin();
            int last=upper_bound(arr.begin(),arr.end(),target)-arr.begin()-1;
            ans[i-1][0]=first;
            ans[i-1][1]=last;
        }
        else
            ans[i-1][0]=-1;
        i++;
    }
    for(i=0;i<test;i++)
    {
        if(ans[i][0]==-1)
            cout<<-1<<endl;
        else
            cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    }
    return 0;
}
