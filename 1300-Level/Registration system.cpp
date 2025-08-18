#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    vector<string>v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    /* for(int i=0; i<n; i++)
     {
         cout<<v[i]<<" ";
     }*/

    map<string,int>mp;      //Key-> Name ,Value-> Count
    for(int i=0; i<n; i++)
    {
        string name=v[i];
        if(mp[name]==0)
        {
            cout<<"OK"<<endl;
            mp[name]=1;
        }
        else
        {
            string newName=name+to_string(mp[name]);
            cout<<newName<<endl;
            mp[name]++;
        }
    }

}
