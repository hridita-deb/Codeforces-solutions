#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        map<int,int> freq;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            freq[v[i]]++;
        }

        int ans=0;
        for(auto &it : freq)
        {
            ans=ans+it.second/2;
        }

        cout << ans << endl;
    }
}
