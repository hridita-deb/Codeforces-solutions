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

        int sum=0,even=0,odd=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum=sum+v[i];

        }

        for(int i=0; i<n; i++)
        {
            if(v[i]%2==0)
            {
                even=1;
                break;
            }
        }

        for(int i=0; i<n; i++)
        {
            if(v[i]%2!=0)
            {
                odd=1;
                break;
            }
        }

        if(sum%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(even==1 && odd==1)
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
