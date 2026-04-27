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
        set<int>st;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            st.insert(v[i]);
        }


        int a=st.size();
        int ans=0;


        if(st.find(a)!=st.end())
        {
            ans=a;
        }
        else
        {
            for(auto it:st)
            {
                if(it>a)
                {
                    ans=it;
                    break;
                }
            }
        }

        cout<<ans<<endl;
    }
}
