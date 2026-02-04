#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string>v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }


        string ans="";
        for(int i=0; i<n; i++)
        {
            if(ans+v[i]<v[i]+ans)
            {
                ans=ans+v[i];
            }
            else
            {
                ans=v[i]+ans;
            }
        }

        cout<<ans<<endl;




    }
}
