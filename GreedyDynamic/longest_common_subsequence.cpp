#include<bits/stdc++.h>
using namespace std;

int lcs(string s1,string s2,int m,int n)
{
    int i,j;
    int table[n+1][m+1];
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
        {
            if(i==0 || j==0)
                table[i][j]=0;
            else
            {
                if(s1[j-1]==s2[i-1])
                    table[i][j]=table[i-1][j-1]+1;
                else
                    table[i][j]=max(table[i-1][j],table[i][j-1]);
            }
        }
    }
    return table[n][m];
}

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int m,n;
        cin>>m>>n;
        string s1,s2;
        cin>>s1>>s2;
        cout<<lcs(s1,s2,m,n)<<endl;
    }
    return 0;
}
