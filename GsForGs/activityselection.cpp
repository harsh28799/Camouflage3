#include<bits/stdc++.h>
using namespace std;

struct time
{
    long long int start, finish, position;
};

bool check(struct time i, struct time j)
{
    return(i.finish<j.finish);
}

int main()
{
    int test;
    cin>>test;
    int t=test;
    vector <int> ans[test];
    int j=0;
    while(test>0)
    {
        int i;
        int n;
        cin>>n;
        struct time arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i].start;
            arr[i].position=i+1;
        }
        for(i=0;i<n;i++)
            cin>>arr[i].finish;
        sort(arr,arr+n,check);
        ans[i].push_back(arr[0].position);
        long long int f=arr[0].start;
        for(i=1;i<n;i++)
        {
            if(arr[i].start>=f)
            {
                ans[j].push_back(arr[i].position);
                f=arr[i].finish;
            }
        }
        j++;
        test--;
    }
    for(test=0;test<t;test++)
    {
        for(j=0;j<sizeof(ans[test]);j++)
        {
            cout<<ans[test].back()<<" ";
            ans[test].pop_back();
        }
    }
    return 0;
}
