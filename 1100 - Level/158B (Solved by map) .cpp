#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    vector<int>v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        // int key=v[i];
        // mp[key]=mp[key]+1;
        mp[v[i]]++;
    }

    int cnt1=mp[1];  // 1 কতবার আছে সেটা  store করছি ( second দিয়ে access করার জন্য loop লাগবে)
    int cnt2=mp[2];
    int cnt3=mp[3];
    int cnt4=mp[4];



    int car=0;
    car=car+cnt4;

    while(cnt3>0)
    {
        car++;
        cnt3--;

        if(cnt1>0)
        {
            cnt1--;
        }
    }

    while(cnt2>=2)
    {
        car++;
        cnt2--;
        cnt2--;
    }

    while(cnt2==1)
    {
        car++;
        cnt2--;
        if(cnt1>0)
        {
            cnt1--;
        }
        if(cnt1>0)
        {
            cnt1--;
        }
    }

    while(cnt1>0)
    {
        car++;
        cnt1=cnt1-4;
    }

    cout<<car<<endl;

}
