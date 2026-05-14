#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    string s;
    cin>>s;

    map<string,int>mp;
    int max=0;
    string ans;

    for(int i=0; i<n-1; i++)
    {
        string s1=s.substr(i,2);
        mp[s1]++;

        if(mp[s1]>max){
            max=mp[s1];
            ans=s1;
        }
    }

    cout<<ans<<endl;
}
