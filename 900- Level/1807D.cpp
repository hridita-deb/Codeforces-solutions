//Concept : Prefix Sum

#include <bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;


        vector < long long > v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

        }

        long long old_sum = 0;
        for (int i = 0; i < n; i++)
        {

            old_sum = old_sum + v[i];
        }


        vector < long long > prefix_sum_store(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            prefix_sum_store[i] = prefix_sum_store[i - 1] + v[i - 1];
        }


        while (q--)
        {
            long long left, right, k;
            cin >> left >> right >> k;

            long long dltd_range_sum = prefix_sum_store[right] - prefix_sum_store[left - 1];
            long long new_add = (right - left + 1) * k;
            long long ans = old_sum - dltd_range_sum + new_add;


            //cout << ans << endl;

            if (ans % 2 == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }

        }




    }
}
