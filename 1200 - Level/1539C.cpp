#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long n, budget, x;
    cin >> n >> budget >> x;


    vector < long long > v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());


    vector < long long > cost;
    for (long long i = 1; i < n; i++)
    {
        long long gap = v[i] - v[i - 1];
        if (gap > x)
        {
            cost.push_back((gap - 1) / x);
        }
    }

    sort(cost.begin(), cost.end());
    long long minimize = 0;
    for (long long i = 0; i < cost.size(); i++)
    {
        if (cost[i] <= budget)
        {
            budget = budget - cost[i];
            minimize++;
        }
    }


    long long ans = 1 + (cost.size() - minimize);
    cout << ans << endl;
}
