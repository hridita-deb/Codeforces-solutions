#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {


        long long x,y,a,b;
        cin>>x>>y>>a>>b;

        long long min_psble=y*a;
        long long max_psble=y*b;

        if(min_psble<=x && x<=max_psble)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
