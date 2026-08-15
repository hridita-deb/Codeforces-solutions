#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;

    for(int i=0; i<s.size(); i++)
    {
        int n=s[i]-'0';
        int invert=9-n;

        if(i==0 && n==9)
        {
            continue;
        }

        if(invert<=n)
        {
            s[i]=invert+'0';
        }
    }

    cout<<s<<endl;
}




