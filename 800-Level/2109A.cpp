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
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        int zero=0,one=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]==0)
            {
                zero++;
            }
            else
            {
                one++;
            }
        }

        int count=0;
        for(int i=0; i<n-1; i++)
        {
            if(v[i]==0 && v[i+1]==0)
            {
                count=1;
                break;
            }

        }

        if(zero>0 && count!=1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
}