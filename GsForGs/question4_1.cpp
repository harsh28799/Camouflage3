#include<bits/stdc++.h>
using namespace std;

void intertion(int a[],int left,int right)
{
    int n=right-left+1;
    int i,j,temp;
    for(i=left+1;i<left+n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=left&&a[j]>temp)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    for(j=left;j<left+n;j++)
        cout<<a[j]<<" ";
    cout<<endl;
}

void join(int a[],int left,int mid,int right)
{
    int i;
    int m=left,n=mid+1;
    int k=0;
    int b[right-left+1];
    while(m<=mid&&n<=right)
    {
        if(a[m]<=a[n])
            b[k++]=a[m++];
        else
            b[k++]=a[n++];
    }
    if(m<=mid)
    {
        while(m<=mid)
        {
            b[k++]=a[m++];
        }
    }
    if(n<=right)
    {
        while(n<=right)
        {
            b[k++]=a[n++];
        }
    }
    k=0;
    for(i=left;i<=right;i++)
        a[i]=b[k++];
}
c
void divide(int a[],int left,int right)
{
    if(right-left<10)
        intertion(a,left,right);
    else
    {
        int mid=(left+right)/2;
        divide(a,left,mid);
        divide(a,mid+1,right);
        join(a,left,mid,right);
    }
}

int main()
{
    int i;
    int num=100;
    int a[100];
    for(i=0;i<num;i++)
        a[i]=rand()%1000+1;

    for(i=0;i<num;i++)
        cout<<a[i]<<" ";

    divide(a,0,num-1);

    cout<<endl;
    for(i=0;i<num;i++)
        cout<<a[i]<<" ";

    return 0;
}
