#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string p = s;

    reverse(s.begin(), s.end());

    if (s == p) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}