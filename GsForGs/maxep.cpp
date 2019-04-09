#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int coins=1000;
    long long int n,c;
    cin>>n>>c;
    long long int low=1,high=n;
    long long int max=n;
    while(low<=high)
    {
        long long int mid=(low+high)/2;
        if(coins>=1)
        {
            cout<<1<<" "<<mid<<endl;
            coins--;
        }
        else
            break;
        int reply;
        cin>>reply;
        if(reply==0)
        {
            low=mid+1;
        }
        else if(reply==1)
        {
            max=mid;
            high=mid-1;
            if(coins>=c)
            {
                cout<<2<<endl;
                coins-=c;
            }
            else
                break;
        }
        else
        {
            max=mid;
            if(coins>=c)
            {
                cout<<2<<endl;
                coins-=c;
            }
            else
                break;
        }
    }
    cout<<3<<" "<<max<<endl;
}
