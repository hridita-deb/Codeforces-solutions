#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, p;
    cin >> t;
    while (t--)
    {

        vector < long long > v(7);

        for (int i = 0; i < 7; i++)
        {
            cin >> v[i];

        }
        sort(v.begin(), v.end());

        long long first = v[0];
        long long second = v[1];
        long long third = v[6] - v[0] - v[1];

        cout << first << " " << second << " " << third << endl;
    }
}