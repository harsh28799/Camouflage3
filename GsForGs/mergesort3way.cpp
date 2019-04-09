#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={23,24,34,43};
    int b[]={12,21,14,14};
    int c[]={32,54,56,78};
    int ans[12];
    int i=0,j=0,k=0;
    int x=0;
    while(i<4&&j<4&&k<4)
    {
        if(a[i]<b[j]&&a[i]<c[k])
            ans[x++]=a[i++];
        else if(b[j]<a[i]&&b[j]<c[k])
            ans[x++]=b[j++];
        else
            ans[x++]=c[k++];
    }
    while(i<4&&j<4)
    {
        if(a[i]<b[j])
            ans[x++]=a[i++];
        else
            ans[x++]=b[j++];
    }
    while(i<4&&k<4)
    {
        if(a[i]<c[k])
            ans[x++]=a[i++];
        else
            ans[x++]=c[k++];
    }
    while(j<4&&k<4)
    {
        if(b[j]<c[k])
            ans[x++]=b[j++];
        else
            ans[x++]=c[k++];
    }
    while(i<4)
        ans[x++]=a[i++];
    while(j<4)
        ans[x++]=b[j++];
    while(k<4)
        ans[x++]=c[k++];
    for(i=0;i<12;i++)
        cout<<ans[i]<<" ";
    return 0;
}
