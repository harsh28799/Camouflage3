#include<bits/stdc++.h>
using namespace std;

int a=0;

int permute(char arr[],int l,int r)
{
    int i;
    if(l==r)
    {
        cout<<arr<<" ";
        //ans[a].push_back(arr);
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
    int test;
    cin>>test;
    vector <string> ans;
    while(test>0)
    {
        char arr[100];
        cin>>arr;
        sort(arr,arr+strlen(arr));
        permute(arr,0,strlen(arr)-1);
        cout<<endl;
        test--;
    }
}
