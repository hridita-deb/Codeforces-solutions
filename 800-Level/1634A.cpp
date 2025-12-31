#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,k;
        cin>>n>>k;
        string p;
        cin>>p;
        string s=p;
        reverse(s.begin(),s.end());
        if(k==0)
        {
            cout<<1<<endl;
        }
        else if(s==p)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }

    }
}
