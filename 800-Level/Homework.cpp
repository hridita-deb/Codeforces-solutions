#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        string a, b, c;

        cin >> n >> a >> m >> b>>c;

        string result = a;

        for (int i = 0; i < m; i++)
        {
            if (c[i] == 'V')
            {
                result = b[i] + result;
            }
            else
            {
                result = result + b[i];
            }
        }

        cout << result << endl;
    }


}
