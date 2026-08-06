#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;

        int sum = 0, i = 1;
        int count = 0;
        while (sum < s)
        {
            sum = sum + i;
            count++;
            i = i + 2;
        }
        cout << count << endl;
    }
}
