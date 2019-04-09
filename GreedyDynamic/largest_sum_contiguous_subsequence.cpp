#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[],int num)
{
    int max_current=arr[0];
    int max_global=arr[0];
    int i;
    for(i=1;i<num;i++)
    {
        max_current=max(arr[i],arr[i]+max_current);
        if(max_current>max_global)
            max_global=max_current;
    }
    return max_global;
}

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int i;
        int num;
        cin>>num;
        int arr[num];
        for(i=0;i<num;i++)
            cin>>arr[i];
        cout<<kadane(arr,num)<<endl;
    }
    return 0;
}
