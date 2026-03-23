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
        vector<int>v(n);
        int odd=0,even=0;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];

            if(v[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }

        }

        sort(v.begin(),v.end());

        int found=0;
        if(even%2==0 && odd%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            for(int i=1; i<n; i++)
            {
                if(v[i]-v[i-1]==1)
                {
                    found=1;
                    break;
                }
            }
            if(found==1)
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
