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

        string s;
        cin >> s;

        vector<int>v;

        for (int i=0; i<n; i++)
        {
            if (s[i] == '1')
            {
                v.push_back(i);
            }
        }

        if(v.size()==2)
        {
            if(abs(v[0]-v[1])!=1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

        else
        {

            if (v.size()% 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }




}
