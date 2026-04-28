#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector < long long > c(n);
        vector < long long > o(n);
        set < int > st;
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];

        }
        for (int i = 0; i < n; i++)
        {

            cin >> o[i];
        }
        int min1 = * min_element(c.begin(), c.end());
        int min2 = * min_element(o.begin(), o.end());


        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = ans + max(c[i] - min1, o[i] - min2);
        }

        cout << ans << endl;

    }
}
