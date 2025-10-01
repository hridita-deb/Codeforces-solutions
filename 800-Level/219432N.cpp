#include <bits/stdc++.h>
using namespace std;

int main()
{

    char ch;
    cin >> ch;
    int n;
    cin >> n;
    vector < int > v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v[i]; j++)
        {
            cout << ch;
        }
        cout << endl;
    }




}