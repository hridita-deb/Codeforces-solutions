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

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()),v.end());


        int maxLen = 1;
        int curLen = 1;

        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] == v[i - 1] + 1)
            {
                curLen++;
            }
            else
            {
                curLen = 1;
            }
            maxLen = max(maxLen, curLen);
        }

        cout << maxLen << endl;
    }

}
