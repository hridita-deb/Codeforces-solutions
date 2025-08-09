#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        string s = to_string(n);


        if (s.size() > 9)
        {
            cout << "0" << endl;
        }


        else if (s.size() == 1)
        {
            cout << n - 1 << endl;
        }

        else if (s.size() == 2)
        {
            cout << n - 10 << endl;
        }

        else if (s.size() == 3)
        {
            cout << n - 100 << endl;
        }

        else if (s.size() == 4)
        {
            cout << n - 1000 << endl;
        }

        else if (s.size() == 5)
        {
            cout << n - 10000 << endl;
        }

        else if (s.size() == 6)
        {
            cout << n - 100000 << endl;
        }

        else if (s.size() == 7)
        {
            cout << n - 1000000 << endl;
        }

        else if (s.size() == 8)
        {
            cout << n - 10000000 << endl;
        }

        else if (s.size() == 9)
        {
            cout << n - 100000000 << endl;
        }


    }
}
