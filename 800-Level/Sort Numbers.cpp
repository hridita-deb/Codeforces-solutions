#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c;
    cin>>a>>b>>c;

    vector<int>v;
    vector<int>p;

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    p.push_back(a);
    p.push_back(b);
    p.push_back(c);

    sort(v.begin(),v.end());

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<endl;

    for(int i=0; i<p.size(); i++)
    {
        cout<<p[i]<<endl;
    }




}
