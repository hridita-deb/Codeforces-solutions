#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        string s;
        cin>>s;

        set<char>st;
        int d=0;
        for(int i=0; i<s.size(); i++)
        {
            char a=s[i];
            st.insert(a);
            if(st.size()>3)
            {
                d++;
                st.clear();
                st.insert(a);
            }
        }

        if(st.size()!=0)
        {
            d++;
        }
        cout<<d<<endl;

    }
}
