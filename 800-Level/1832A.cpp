#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        string s;
        cin>>s;
        string s1,s2;
        if(s.size()%2==0)
        {
            s1=s.substr(0,s.size()/2);
            s2=s.substr(s.size()/2);
        }
        else
        {
            s1=s.substr(0,s.size()/2);
            s2=s.substr(s.size()/2+1);
        }
        //    cout<<s1<<" "<<s2<<endl;

        if(s1==s2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
