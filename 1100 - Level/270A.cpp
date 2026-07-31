/*bohuvujer vitorer kon a hole bahirer kon hobe 180-a
ekhon kono ekta point theke ghora shuru kore abar same point ashle 360 degree rotation complete hoi
n*(180-a)=360 , n=bohuvujer total bahu & eta integer hote hobe */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        if(360%(180-a)!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
