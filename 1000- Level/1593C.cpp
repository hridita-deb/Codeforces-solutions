//if(cat er position < mouse er position) -> mouse save hbe

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int hole, m;
        cin >> hole >> m;
        vector < int > mice(m);
        for (int i = 0; i < m; i++)
        {
            cin >> mice[i];
        }

        sort(mice.rbegin(), mice.rend());

        int cat = 0;
        int save = 0;

        for (int i = 0; i < m; i++)
        {
            if (cat < mice[i])
            {
                save++;
                cat = cat + (hole - mice[i]);
            }

        }

        cout << save << endl;
    }
}
