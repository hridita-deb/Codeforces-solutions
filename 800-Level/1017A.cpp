#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int thomas_sum = 0;

    vector < int > v(n);

    for (int i = 0; i < n; i++) {

        int a, b, c, d;
        cin >> a >> b >> c >> d;
        v[i] = a + b + c + d;

        if (i == 0) {
            thomas_sum = v[i];
        }
    }

    int rank = 1;
    for (int i = 1; i < n; i++) {
        if (v[i] > thomas_sum) {
            rank++;
        }
    }

    cout << rank << endl;
}