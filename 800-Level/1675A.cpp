#include<bits/stdc++.h>

using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        if (a >= x && b >= y)
        {
            cout << "Yes" << endl;
        }


        else if (a >= x && b < y)
        {
            if (y - b <= c)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }

        else if (a < x && b >= y)
        {
            if (x - a <= c)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }

        else if (a < x && b < y)
        {

            int p = (x - a) + (y - b);
            {
                if (p <= c) {
                    cout << "Yes" << endl;
                }
                else {
                    cout << "No" << endl;
                }
            }
        }



    }
}