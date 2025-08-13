#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<string>st;
    vector<string>v;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;

        if(st.find(s)==st.end())
        {
            cout<<"NO"<<endl;
            st.insert(s);
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
}
