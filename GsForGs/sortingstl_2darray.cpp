#include<bits/stdc++.h>
using namespace std;

struct time
{
    int start,finish;
};

bool check(struct time i,struct time j)
{
    cout<<"reached";
    return (i.finish<j.finish);
}

int main()
{
    int i;
    struct time arr[6];
    for(i=0;i<6;i++)
    {
        cin>>arr[i].start>>arr[i].finish;
    }
    sort(arr,arr+6,check);
    for(i=0;i<6;i++)
    {
        cout<<arr[i].start<<" "<<arr[i].finish<<endl;
    }
    cout<<"hope so!";
}
