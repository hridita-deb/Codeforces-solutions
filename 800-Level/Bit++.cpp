#include<iostream>

using namespace std;

int main()
{
    int n, x = 0;
    cin >> n;

    if (n >= 1 && n <= 150)
    {
      string a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == "x++" || a[i] == "++x" || a[i] == "X++" || a[i] == "++X")
            {
                x = x+1;
            }
            else if (a[i] == "x--" || a[i] == "--x" || a[i] == "X--" || a[i] == "--X" )
            {
                x = x-1;
            }
            else
            {
                cout << "Error";
                return 1;
            }
        }

        cout << x;
    }
    else
    {
        cout << "Error";
    }

    return 0;
}
