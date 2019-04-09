#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={122,536,345,2,413,23,4,6,76,8,5,674,45,57,546};
    int i,j,temp;
    for(i=1;i<15;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0&&a[j]>temp)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    for(j=0;j<15;j++)
        cout<<a[j]<<" ";
}
