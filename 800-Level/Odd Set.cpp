#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;


        int p=2*n;
        vector<int>v(p);
        for ( int i=0; i<p; i++)
        {
            cin>>v[i];
        }


        int odd=0,even=0;
        for ( int i=0; i<p; i++)
        {
            if(v[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }


        if(even==n && odd==n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
