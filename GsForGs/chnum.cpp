#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int test;
    cin>>test;
    long long int ans1[test],ans2[test];
    long long int k=0;
    int j;
    while(k<test)
    {
        int i;
        long long int num,a;
        cin>>num;
        long long int sum_p=0,sum_n=0;
        for(i=0;i<num;i++)
        {
            cin>>a;
            if(a>=0)
                sum_p++;
            else
                sum_n++;
        }
        if(sum_n==0)
        {
            ans1[k]=sum_p;
            ans2[k]=sum_p;
        }
        else if(sum_p==0)
        {
            ans1[k]=sum_n;
            ans2[k]=sum_n;
        }
        else if(sum_p>sum_n)
        {
            ans1[k]=sum_p;
            ans2[k]=sum_n;
        }
        else
        {
            ans1[k]=sum_n;
            ans2[k]=sum_p;
        }
        k++;
    }
    for(j=0;j<test;j++)
    {
        cout<<ans1[j]<<" "<<ans2[j]<<endl;
    }
    return 0;
}
