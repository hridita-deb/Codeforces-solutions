#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        string s;
        cin>>s;


        int i;
        for( i=0; i<s.size(); i++)
        {
            if(d>s[i]-'0')
            {
                s.insert(i,to_string(d));
                break;
            }
        }


        if(i==s.size())
        {
            s.insert(s.size(),to_string(d));
        }

        cout<<s<<endl;
    }
}
