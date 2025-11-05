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
        vector<int>even;
        vector<int>odd;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]%2==0)
            {
                even.push_back(v[i]);
            }
            else
            {
                odd.push_back(v[i]);
            }
        }



        even.insert(even.end(),odd.begin(),odd.end());

        for(int i=0; i<even.size(); i++)
        {
            cout<<even[i]<<" ";
        }
        cout<<endl;

    }
}
