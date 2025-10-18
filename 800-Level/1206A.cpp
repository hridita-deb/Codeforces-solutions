#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int p;
    cin>>p;
    vector<int> v(p);
    for (int i = 0; i < p; i++)
    {
        cin >> v[i];
    }

    cout <<*max_element(a.begin(), a.end())<<" "<<*max_element(v.begin(), v.end())<< endl;
}
