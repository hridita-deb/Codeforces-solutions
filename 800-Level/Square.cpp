#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;

    while(t--)
    {

        int a,b,c,d,e,f,g,h;
        cin>>a>>b>>c>>d>>e>>f>>g>>h;

        vector<int>v;
        v.push_back(a);
        v.push_back(c);
        v.push_back(e);
        v.push_back(g);

        sort(v.begin(),v.end());
        int area=pow(v[0]-v[2],2);
        cout<<area<<endl;
    }
}
