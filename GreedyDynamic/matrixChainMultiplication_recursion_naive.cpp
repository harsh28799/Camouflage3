#include<bits/stdc++.h>
using namespace std;

#define inf 100000000;

int chainMatrixMultiply(int p[],int i,int j)
{
    if(i==j)
        return 0;
    int k,min=inf;
    int count=0;
    for(k=i;k<j;k++)
    {
        count = chainMatrixMultiply(p,i,k)+chainMatrixMultiply(p,k+1,j)+p[i-1]*p[k]*p[j];
        if(count<min)
            min=count;
    }
    return min;
}

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int i;
        int num;
        cin>>num;
        int p[num];
        for(i=0;i<num;i++)
            cin>>p[i];
        cout<<chainMatrixMultiply(p,1,num-1);
    }
    return 0;
}
