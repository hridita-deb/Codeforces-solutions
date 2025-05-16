#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int sum = 0;
        int p =0;

        if (m >= a && m >= b)
        {
            p = p + (m - a) + (m - b);
            sum = sum + a + b;
            if (p >= c)
            {
                sum = sum + c;
            }
            else
            {
                sum = sum + p;
            }
            cout << sum << endl;
        }


        else if (m >= a && m <= b)
        {
            p = p + (m - a);
            sum = sum + a + m;
            if (p >= c)
            {
                sum = sum + c;
            }
            else
            {
                sum = sum + p;
            }
            cout << sum << endl;
        }


        else if (m <= a && m >= b)
        {
            p = p + (m - b);
            sum = sum + m + b;
            if (p >= c)
            {
                sum = sum + c;
            }
            else
            {
                sum = sum + p;
            }
            cout << sum << endl;
        }


        else if (m <= a && m <= b)
        {
            p = 0;
            sum = sum + m + m;
            if (p >= c)
            {
                sum = sum + c;
            }
            else
            {
                sum = sum + p;
            }
            cout << sum << endl;
        }



    }

}
