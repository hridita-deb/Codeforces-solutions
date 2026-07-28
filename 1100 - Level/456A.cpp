#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        int p,q;
        cin>>p>>q;
        mp[p]=q;
    }

    int mxq=0;
    int found=0;
    for(auto it:mp)
    {
        if(it.second<mxq)
        {
            found=1;
            break;
        }
        else
        {
            mxq=it.second;
        }
    }

    if(found==0)
    {
        cout<<"Poor Alex"<<endl;
    }
    else
    {
        cout<<"Happy Alex"<<endl;
    }






}
 
