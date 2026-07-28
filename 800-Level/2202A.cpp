#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x,y;
        cin>>x>>y;


        long long diff=(x-2*y);
        if(diff<0 || diff%3!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            long long k=diff/3;
            long long c=2*max(0LL,-y);
            if(c<=k)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }




    }
}
