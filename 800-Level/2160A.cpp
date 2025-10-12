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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        set<int> s(a.begin(), a.end());

        int answer = 0;
        for (int i = 0; i <= n; i++)
        {
            if (s.find(i) == s.end())
            {
                answer = i;
                break;
            }
        }

        cout << answer << endl;
    }

}
