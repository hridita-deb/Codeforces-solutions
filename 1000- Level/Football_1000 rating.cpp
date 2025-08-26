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


    map<string,int>mp;         //Key->Team,Value->Count
    for(int i=0; i<n; i++)
    {
        string team=v[i];
        if(mp.find(team)==mp.end())    //If the team isn't in the map,set count=1
        {
            mp[team]=1;
        }
        else
        {
            mp[team]++;                        //If the team is in the map,increase count by 1
        }
    }


    string winner_team;
    int maxGoal=0;
    for(auto it : mp)
    {
        if(it.second>maxGoal)
        {
            maxGoal=it.second;
            winner_team=it.first;
        }
    }

    cout<<winner_team<<endl;
}









