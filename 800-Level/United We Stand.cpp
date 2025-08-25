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

        int min=v[0];

        for(int i=1; i<n; i++)
        {
            if(min>v[i])
            {
                min=v[i];
            }
        }

        vector<int>b;
        vector<int>c;

        for(int i=0; i<n; i++)
        {
            if(v[i]==min)
            {
                b.push_back(v[i]);
            }
            else
            {
                c.push_back(v[i]);
            }
        }

        if(b.size()==n)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<b.size()<<" "<<c.size()<<endl;


            for(auto it : b)
            {
                cout<<it<<" ";
            }
            cout<<endl;
            for(auto it : c)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }
}















