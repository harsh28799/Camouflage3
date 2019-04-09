#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    int test;
    cin>>test;
    long long int ans[test];
    int time=0;
    while(time<test)
    {
        long long int num,fav;
        long long int n_num,div;
        long long int rem;
        long long int a,b,j;
        cin>>num>>fav;
        n_num=num;
        div=10;
        while(n_num>0)
        {
            rem=n_num%10;
            if(rem>=fav)
            {
                a=num%(div/10);
                b=num/div;
                num=(b*div)+(a*10)+fav;
            }
            n_num=n_num/10;
            div=div*10;
        }
        cout<<num<<endl;
        n_num=num;
        int temp=n_num%10;
        int pos=1;
        int t=1;
        while(n_num>0)
        {
            rem=n_num%10;
            n_num=n_num/10;
            if(rem<=temp)
            {
                temp=rem;
                pos=t;
            }
            t++;
        }
        double d=pow(10,pos);
        num=num%(int)d;
        for(j=0;j<t-pos-1;j++)
        {
            num=num*10+fav;
        }
        ans[time]=num;
        time++;
    }
    for(i=0;i<test;i++)
        cout<<ans[i]<<endl;
}
