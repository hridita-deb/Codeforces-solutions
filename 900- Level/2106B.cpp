#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;

        vector < int > v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(i);
        }

        int found = 0;
        for (auto it: v)
        {
            if (it == k)
            {
                found = 1;
                v.erase(v.begin() + it);
                break;
            }
        }

        if (found == 1)
        {
            v.push_back(k);
        }

        for (auto it: v)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}
