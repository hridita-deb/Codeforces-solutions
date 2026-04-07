#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;

        long long pack=min(a,b);
        long long maxi=max(a,b);
        long long xtra=maxi-pack;

        if(xtra<=c*pack)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
