#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n,s,t;
        cin>>n>>s>>t;

        int ans=max(n-s,n-t)+1;
        cout<<ans<<endl;

    }
}
