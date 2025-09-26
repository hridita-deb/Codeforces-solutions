#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k;
    cin>>n>>k;

    vector<int>v(n);
    vector<int>index;

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    unordered_set<int>st;
    for(int i=0; i<n; i++)
    {

        if(st.find(v[i])==st.end())
        {
            index.push_back(i+1);

            st.insert(v[i]);
        }

    }


    if(k<=st.size())
    {
        cout<<"YES"<<endl;
        for(int i=0;i<k;i++)
        {
            cout<<index[i]<<" ";
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
