#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int a,b;
        cin>>a>>b;
        int c=min(a,b);
        int d=max(a,b);

        int ans=max(2*c,d);
        cout<<ans*ans<<endl;
    }
}

