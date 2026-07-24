#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        long long a, b;
        cin >> a >> b;

        long long x = a * b;
        long long y = a;
        long long z = x + y;

        if (b == 1)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
            cout << x << " " << y << " " << z << endl;
        }

    }
}
