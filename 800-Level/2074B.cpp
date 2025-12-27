#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;

        long long sum=0;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum=sum+v[i];
        }

        cout<<sum-(n-1)<<endl;
    }
}
