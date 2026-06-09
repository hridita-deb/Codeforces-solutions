//1st Process

/*#include<bits/stdc++.h>
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
        sort(v.rbegin(),v.rend());


        int found=0;
        for(auto it:mp)
        {
            if(it.second>=2)
            {
                found=1;
                break;
            }
        }


        if(found==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }

    }
}*/


//Efficient way

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
        sort(v.rbegin(),v.rend());


        if(st.size()!=n)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(auto it:v)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }


    }
}
