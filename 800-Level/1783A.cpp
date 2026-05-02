#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;

        vector < long long > v(n);
        set<int>st;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            st.insert(v[i]);
        }

        sort(v.begin(),v.end());

        int mx=v[n-1];
        int mx2=v[n-2];
        if(st.size()==1)
        {
            cout<<"NO"<<endl;
        }

        else
        {
            cout<<"YES"<<endl;
            cout<<mx<<" ";
            for (int i = 0; i < n-2; i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<mx2;
            cout<<endl;
        }

    }
}
