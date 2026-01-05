#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        string p;

        for (int i = 0; i < s.size(); i++)
        {
            if (i % 2 == 0)
            {
                if (s[i] == 'a')
                {
                    p = p + 'b';
                }
                else
                {
                    p = p + 'a';
                }
            }
            else
            {
                if (s[i] == 'z')
                {
                    p = p + 'y';
                }
                else
                {
                    p = p + 'z';
                }
            }
        }

        cout << p << endl;

    }



}
