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
        vector<int>v(n),s;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];

        }
        s=v;
        sort(v.begin(),v.end());
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]!=s[i])
            {
                count=1;
                break;
            }

        }

        if(count==0)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
}
