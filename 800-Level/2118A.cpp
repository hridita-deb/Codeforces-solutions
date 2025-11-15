#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        int zero=n-k;

        while(k--)
        {
            cout<<1;
        }
        while(zero--)
        {
            cout<<0;
        }
        cout<<endl;
    }
}
