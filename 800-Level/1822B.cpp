#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<long long>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        sort(v.begin(),v.end());

        long long mul=v[0]*v[1];
        long long mul2=v[n-1]*v[n-2];

        if(mul>mul2)
        {
            cout<<mul<<endl;
        }
        else
        {
            cout<<mul2<<endl;
        }
    }
}
