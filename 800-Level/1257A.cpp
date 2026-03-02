#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


        int n,x,a,b;
        cin>>n>>x>>a>>b;
        int c=abs(a-b);
        int ans=min(n-1,c+x);
        cout<<ans<<endl;

    }
}
