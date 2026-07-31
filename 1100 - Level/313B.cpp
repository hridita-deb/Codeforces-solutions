#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;


    vector<int>prefix;
    prefix.push_back(0);
    int    count=0;
    for(int i=1; i<s.size(); i++)
    {
        if(s[i]==s[i-1])
        {
            count++;
        }
        prefix.push_back(count);
    }


    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        int ans=prefix[r-1]-prefix[l-1];
        cout<<ans<<endl;
    }
}

