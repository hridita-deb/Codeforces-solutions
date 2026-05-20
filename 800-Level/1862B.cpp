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
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        vector<int>p;
        p.push_back(v[0]);
        for(int i=1; i<n; i++)
        {
            if(v[i]<v[i-1])
            {
                p.push_back(1);
                p.push_back(v[i]);
            }
            else
            {
                p.push_back(v[i]);
            }
        }


        cout<<p.size()<<endl;
        for(auto it:p)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
