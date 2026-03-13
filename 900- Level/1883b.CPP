#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;


        map<char,int>mp;
        for(int i=0; i<n; i++)
        {
            mp[s[i]]++;
        }


        int odd_found=0;
        for(auto it:mp)
        {
            if(it.second%2!=0)
            {
                odd_found++;
            }
        }


        int a=odd_found-k;
        if(a<=1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


    }
}
