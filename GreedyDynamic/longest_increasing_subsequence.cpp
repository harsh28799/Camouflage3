#include<bits/stdc++.h>
using namespace std;

int lis(int arr[],int num)
{
    int i,j;
    int max=1;
    int lis[num];
    for(i=0;i<num;i++)
        lis[i]=1;
    for(i=1;i<num;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i]>arr[j] && lis[i]<lis[j]+1)
            {
                lis[i]=lis[j]+1;
                if(lis[i]>max)
                    max=lis[i];
            }
        }
    }
    return max;
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
        cout<<lis(arr,num)<<endl;
    }
    return 0;
}

