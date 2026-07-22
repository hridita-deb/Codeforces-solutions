#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector < int > v(n);
        map<int,int>mp;
        set<int>st;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            st.insert(v[i]);
        }



        for(auto it:st)
        {
            cout<<it<<" ";
        }
        for(auto it:mp)
        {
            if(it.second>1)
            {
                for(int i=1; i<it.second; i++)
                {
                    cout<<it.first<<" ";
                }
                cout<<endl;
            }

        }
    }
}

