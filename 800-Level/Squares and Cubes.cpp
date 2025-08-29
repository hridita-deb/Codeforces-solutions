#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        long long n;
        cin>>n;

        set<int>v;

        for(int i=1; i*i<=n; i++)
        {
            v.insert(i*i);
        }

        for(int i=1; i*i*i<=n; i++)
        {
            v.insert(i*i*i);
        }

        cout<<v.size()<<endl;
    }
}
