#include<bits/stdc++.h>
using namespace std;
int main()
{

    string a,b,c;
    cin>>a>>b>>c;
    string d=a+b;
    sort(d.begin(),d.end());
//cout<<d<<endl;
    sort(c.begin(),c.end());
//cout<<c;

    if(d==c)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
