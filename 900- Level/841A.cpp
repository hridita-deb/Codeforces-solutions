#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    map<char,int>mp;
    for(int i=0; i<s.size(); i++)
    {
        mp[s[i]]++;
    }

    int found=0;
    for(auto it:mp)
    {
        if(it.second>k)
        {
            found=1;
            break;
        }
    }

    if(found==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
