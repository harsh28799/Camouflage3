#include<bits/stdc++.h>

#define inf 100000000
#define nil -1

using namespace std;
int table[1000][1000];

int chainMatrixMultiply(int p[],int i,int j)
{
    if(table[i][j]!=nil)
        return table[i][j];
    if(i==j)
        table[i][j]=0;
    else
    {
        int k,min=inf;
        int count=0;
        for(k=i;k<j;k++)
        {
            count=chainMatrixMultiply(p,i,k)+chainMatrixMultiply(p,k+1,j)+p[i-1]*p[k]*p[j];
            if(count<min)
                min=count;
        }
        table[i][j]=min;
    }
    return table[i][j];
}

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int i,j;
        int num;
        cin>>num;
        int p[num];
        for(i=0;i<num;i++)
            cin>>p[i];
        for(i=0;i<num;i++)
        {
            for(j=0;j<num;j++)
            {
                table[i][j]=nil;
            }
        }
        cout<<chainMatrixMultiply(p,1,num-1)<<endl;
    }
    return 0;
}

