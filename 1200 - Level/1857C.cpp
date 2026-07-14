#include <bits/stdc++.h>

using namespace std;

int main() {


    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;

        int bS = (n * (n - 1)) / 2;
        vector < int > b(bS);

        for (int i = 0; i < bS; i++) {
            cin >> b[i];
        }

        sort(b.begin(), b.end());

        int skip = n - 1;

        vector < int > a;
        for (int i = 0; i < bS;) {
            a.push_back(b[i]);
            i = i + skip;
            skip--;

        }

        a.push_back(1e9);

        for (auto it: a) {
            cout << it << " ";
        }
        cout << endl;

    }




}
