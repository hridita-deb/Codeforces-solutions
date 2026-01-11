#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long>v;

        for (int k = 1; ; k++)
        {
            long long divisor = 1 + (long long)pow(10, k);

            if (divisor > n)
            {
                break;
            }

            if (n % divisor == 0)
            {
                v.push_back(n / divisor);
            }
        }
        sort(v.begin(),v.end());

        if (v.empty())
        {
            cout << 0 << endl;
        }
        else
        {
            cout << v.size() << endl;
            for (int i=0; i<v.size(); i++)
            {
                cout <<v[i]<< " ";
            }
            cout<<endl;
        }


    }
}
