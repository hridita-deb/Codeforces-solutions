#include <bits/stdc++.h>
using namespace std;
int main() {
       int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        string ans;
        int cur = s[0] - '0';

        for (int i = 1; i < n; i++) {
            if (s[i] == '0') {
                ans += '+';
            } else {
                if (cur > 0) {
                    ans += '-';
                    cur--;
                } else {
                    ans += '+';
                    cur++;
                }
            }
        }

        cout << ans << endl;
    }
}
