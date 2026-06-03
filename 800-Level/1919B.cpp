#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        long long n;
        cin >> n;
        string s;
        cin >> s;
        int plsCnt = 0, minusCnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '+')
            {
                plsCnt++;
            }
            else
            {
                minusCnt++;
            }
        }

        cout << abs(plsCnt - minusCnt) << endl;


    }

}
