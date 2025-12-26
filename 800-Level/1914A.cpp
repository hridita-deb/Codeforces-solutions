#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        map<char,int>mp;

        int count=0;
        for(int i=0; i<n; i++)
        {
            mp[s[i]]++;
        }

        for(auto it:mp)
        {
            char ch=it.first;
            int needed_time=ch-'A'+1;

            if(it.second>=needed_time)
            {
                count++;
            }
        }

        cout<<count<<endl;

    }
}
