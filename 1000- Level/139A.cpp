#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector < long long > v(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> v[i];
    }


    while (n > 0)
    {
        for (int i = 0; i < 7; i++)
        {
            n = n - v[i];
            if (n <= 0)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }



}
