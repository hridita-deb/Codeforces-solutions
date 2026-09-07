#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int cell,tcr,q;
        cin >> cell>>tcr>>q;

        int t1,t2;
        cin>>t1>>t2;

        int dvdPos;
        cin>>dvdPos;


        int ans=0;
        int mx=max(t1,t2);
        int mn=min(t1,t2);


        if(dvdPos>t1 && dvdPos>t2 )
        {
            ans=cell-mx;
        }
        else if(dvdPos<t1 && dvdPos<t2 )
        {
            ans=mn-1;
        }
        else
        {
            ans=(mx-mn)/2;
        }

        cout<<ans<<"\n";

    }
}
