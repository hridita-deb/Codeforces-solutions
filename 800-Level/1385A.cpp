#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        vector<long long>v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);

        sort(v.begin(),v.end());
        if(v[1]!=v[2])
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<v[0]<<" "<<v[0]<<" "<<v[2]<<endl;
        }


    }
}
