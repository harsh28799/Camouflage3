#include<bits/stdc++.h>
using namespace std;

int a=0;
vector <string> ans[10000];

int permute(char arr[],int l,int r)
{
    int i;
    if(l==r)
    {
        ans[a].push_back(arr);
        return 0;
    }
    for(i=l;i<=r;i++)
    {
        swap(arr[l],arr[i]);
        permute(arr,l+1,r);
        swap(arr[l],arr[i]);
    }
}

int main()
{
    int i,j;
    int test;
    cin>>test;
    while(test>0)
    {
        char arr[100];
        cin>>arr;
        sort(arr,arr+strlen(arr));
        permute(arr,0,strlen(arr)-1);
        sort(ans[a].begin(),ans[a].end());
        test--;
        a++;
    }

    for(i=0;i<a;i++)
    {
        for(j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }
}

