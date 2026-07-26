#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;

        vector<int>gPos;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='g')
            {
                gPos.push_back(i);
            }
        }

        int ans=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]==c)
            {

                if(s[i]=='g')
                {
                    break;
                }

                int nxtG=-1;
                for(auto it:gPos)
                {
                    if(it>i)
                    {
                        nxtG=it;
                        break;
                    }
                }

                if(nxtG==-1)
                {
                    nxtG=gPos[0]+n;
                }
                ans=max(ans,nxtG-i);
            }
        }
        cout<<ans<<endl;
    }
}
