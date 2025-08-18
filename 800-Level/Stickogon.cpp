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

        map<int,int>mp; //Key-> Stick length , Value->Count

        for(int i=0; i<n; i++)
        {
            int key=v[i];
            mp[key]=mp[key]+1;
        }

        int polygon=0;

        for(auto it : mp)
        {
            polygon=polygon+it.second/3;
        }

        cout<<polygon<<endl;
    }


}


