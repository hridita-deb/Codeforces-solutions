#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        long long n;
        cin>>n;
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        int max=*max_element(v.begin(),v.end());
        cout<<mp[max]<<endl;




        }
}
