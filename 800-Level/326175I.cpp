#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;

    int a=s[0]-'0';
    int b=s[1]-'0';
// cout<<a<<" "<<b;
    if(a==0 || b==0)
    {
        cout<<"YES"<<endl;
    }
    else if(a%b==0 || b%a==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
