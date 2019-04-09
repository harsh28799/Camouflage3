#include<bits/stdc++.h>
using namespace std;

int multiply(int a[],int b[],int n,int x,int y,int r[])
{
    if(n==1)
        return a[x]*b[y];
    r[x+y]+=multiply(a,b,n/2,x,y,r);
    r[x+n/2+y+n/2]+=multiply(a,b,n/2,x+n/2,y+n/2,r);
    int p=multiply(a,b,n/2,x,y+n/2,r);
    int q=multiply(a,b,n/2,x+n/2,y,r);
    r[x+y+n/2]+=p+q;
    return 0;
}
int main()
{
    int i;
    int a[8]={2,1,3,4,0,1,2,3};
    int b[8]={3,4,5,6,2,3,1,2};
    int r[15];
    for(i=0;i<16;i++)
        r[i]=0;
    multiply(a,b,8,0,0,r);
    for(i=0;i<18;i++)
        cout<<r[i]<<"   ";
    cout<<endl;
}
