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

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int even = 0, odd = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if (even == n || odd == n)
        {
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;

        }

        else
        {
            sort(v.begin(), v.end());
            {
                for (int i = 0; i < n; i++)
                {
                    cout << v[i] << " ";
                }
                cout << endl;

            }
        }
    }
}
