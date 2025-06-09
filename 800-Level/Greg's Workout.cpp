#include<bits/stdc++.h>

using namespace std;
int main() {
  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int chst = 0, bicp = 0, back = 0;

  for (int i = 0; i < n; i++) {
    if (i % 3 == 0) {
      chst = chst + a[i];
    }

    if (i % 3 == 1) {
      bicp = bicp + a[i];
    }

    if (i % 3 == 2) {
      back = back + a[i];
    }
  }


  if (chst > bicp && chst > back) {
    cout << "chest" << endl;
  }

  if (bicp > chst && bicp > back) {
    cout << "biceps" << endl;
  }

  if (back > chst && back > bicp) {
    cout << "back" << endl;
  }

}
