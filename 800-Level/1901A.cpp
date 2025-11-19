#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,x;
        cin>>n>>x;

        vector<int>v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        v.insert(v.begin(),0);


        int diff= 0;
        vector<int>v1;
        for(int i=1; i<v.size(); i++)
        {
            v1.push_back(v[i]-v[i-1]);
        }
        int a=x-v[v.size()-1];
        v1.push_back(2*a);


        cout<<*max_element(v1.begin(),v1.end())<<endl;
    }
}
