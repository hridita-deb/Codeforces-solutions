/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        vector<int>p;
        for(int i=0; i<n; i++)
        {
            if(v[i]%k==0)
            {
                p.push_back(i);
              //  v.erase(v.begin(),v.begin()+i);
              int a=v[i];
              if(




                 )

            }
        }
        sort(p.begin(),p.end());

        for(int i=0; i<p.size(); i++)
        {
            cout<<p[i]+1<<" ";
        }
//cout<<endl;
        for(int i=0; i<v.size(); i++)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}*/

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



        vector<pair<int,int>>p(n);

        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            p[i]= {x,i+1};     //pair a insert korechi value with index
        }

        for(int i=0; i<n; i++)
        {
            p[i].first=p[i].first%k;
            if(p[i].first==0)
            {
                p[i].first=k;
            }
        }

        sort(p.begin(),p.end(),[] (pair<int,int>a,pair<int,int>b)
        {

            if(a.first==b.first)
            {
                return a.second<b.second;
            }
            else
            {
                return a.first>b.first;
            }
        }
            );

        for(auto it:p)
        {
            cout<<it.second<<" ";
        }
        cout<<endl;







    }
}























