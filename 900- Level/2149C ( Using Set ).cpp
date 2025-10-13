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

        vector<int>v(n);
        int count=0;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]==k)
            {
                count++;
            }
        }

        set<int> s(v.begin(), v.end());

        int missing=0;

        for(int i=0; i<k; i++)
        {
            if(s.find(i)==s.end())
            {
                missing++;
            }
        }

        cout<<max(count,missing)<<endl;
    }
}
