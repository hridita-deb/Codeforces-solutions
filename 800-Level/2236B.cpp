#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        map<int,int>mp;
        for(int i=0; i<n; i++)  //Prottekta grp a 1 koita seta dktesi
        {
            if(s[i]=='1')
            {
                int bN=i%k;
                mp[bN]++;
            }
        }


        int found=0;
        for(auto it:mp)
        {
            if(it.second%2!=0)
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
