#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0;
    int test;
    cin>>test;
    long long int arr[test];
    while(test>0)
    {
        long long int a,b;
        cin>>a>>b;
        if(b%a==0)
            arr[i]=a;
        else
            arr[i]=-1;
        i++;
        test--;
    }
    for(test=0;test<i;test++)
    {
        cout<<arr[test]<<endl;
    }
}
