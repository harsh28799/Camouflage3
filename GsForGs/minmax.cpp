#include<bits/stdc++.h>
using namespace std;

struct node
{
    int min,max;
};

struct node minmax(int a[],int left,int right)
{
    struct node mm,m1,m2;
    if(left==right)
    {
        mm.min=a[left];
        mm.max=a[right];
        return mm;
    }
    else if(left==right-1)
    {
        if(a[left]>a[right])
        {
            mm.min=a[right];
            mm.max=a[left];
        }
        else
        {
            mm.min=a[left];
            mm.max=a[right];
        }
        return mm;
    }

    int mid=(left+right)/2;
    m1=minmax(a,left,mid);
    m2=minmax(a,mid+1,right);

    if(m1.min<m2.min)
        mm.min=m1.min;
    else
        mm.min=m2.min;

    if(m1.max>m2.max)
        mm.max=m1.max;
    else
        mm.max=m2.max;

    return mm;
}

int main()
{
    int a[]={1,2,3,4,12,5,53,34,2,32,4,2,4};
    struct node m=minmax(a,0,12);
    cout<<m.min<<" "<<m.max;
    return 0;
}
