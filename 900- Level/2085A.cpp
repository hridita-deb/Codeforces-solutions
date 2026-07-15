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
        string s;
        cin >> s;

        string rv = s;
        reverse(rv.begin(), rv.end());

        if (k == 0)
        {
            if (s < rv)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }

        else if (k > 0)
        {

            int found = 0;

            for (int i = 1; i < n; i++)
            {
                if (s[0] != s[i])
                {
                    found = 1;
                    break;
                }
            }




            if (found == 0)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }




        }
    }




}
