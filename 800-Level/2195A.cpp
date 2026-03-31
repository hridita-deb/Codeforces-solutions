#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        long long n;
        cin>>n;
        vector<int>v(n);
        int a=0,b=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];

            if(v[i]==67)
            {
                b=1;
            }
        }

        if( b==1)
        {

            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }




    }
}
