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
        int x;
        map<int,int>mp;
        for(int i=0; i<n*n; i++)
        {
            cin>>x;
            mp[x]++;
        }


        int found=0;
        for(auto it:mp)
        {
            if(it.second>n*(n-1))
            {
                found=1;
                break;
            }
        }


        if(found==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
