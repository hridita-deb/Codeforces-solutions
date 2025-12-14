#include<bits/stdc++.h>
using namespace std;

void printDigit(long long n)
{
    if(n < 10)
    {
        cout << n << " ";
        return;
    }

    printDigit(n / 10);
    cout << n % 10 << " ";
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;

        if(n == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            printDigit(n);
            cout << endl;
        }
    }
}
