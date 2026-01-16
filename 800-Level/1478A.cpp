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
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }

        int maxCnt=0;

        for(auto it: mp)
        {
            if(it.second>maxCnt)
            {
                maxCnt=it.second;
            }
        }

        cout<<maxCnt<<endl;


    }
}
