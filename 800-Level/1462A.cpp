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

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int l = 0, r = n - 1;
        vector<int> ans;

        while (l <= r)
        {
            if (l == r)
            {
                ans.push_back(v[l]);
            }
            else
            {
                ans.push_back(v[l]);
                ans.push_back(v[r]);
            }
            l++;
            r--;
        }

        for (int x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
