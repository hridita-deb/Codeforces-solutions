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


        if (v[n - 2] > v[n - 1])
        {
            cout << -1 << endl;
        }
        else
        {


            if (v[n - 1] >= 0)
            {
                cout << n - 2 << endl; // last er 2 ta alrdy sorted

                for (int i = 1; i <= n - 2; i++)
                {
                    cout << i << " " << n - 1 << " " << n << endl; // 1 based index er jnn
                }
            }
            else
            {
                if (is_sorted(v.begin(), v.end()))
                {
                    cout << 0 << endl;
                }
                else
                {
                    cout << -1 << endl;
                }
            }


        }
    }
}
