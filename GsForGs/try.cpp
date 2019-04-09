#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <string> ans;
    ans.push_back("acb");
    ans.push_back("abc");
    cout<<ans[0];
    cout<<ans[1];
    sort(ans.begin(),ans.end());
    cout<<ans[0];
    cout<<ans[1];
    return 0;
}
