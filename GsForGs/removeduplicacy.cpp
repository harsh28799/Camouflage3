#include<bits/stdc++.h>
using namespace std;

string remove_repeted(string str)
{
    int i;
    int n=str.length();
    string temp;
    if(str[0]!=str[1])
        temp+=str[0];
    for(i=1;i<n;i++)
    {
        if(str[i]!=str[i-1]&&str[i]!=str[i+1])
            temp+=str[i];
    }
    if(temp.length()==0)
        return temp;
    if(temp.length()<n)
        return remove_repeted(temp);
    return temp;
}

int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
        string str;
        cin>>str;
        cout<<remove_repeted(str)<<endl;
        n--;
    }
}
