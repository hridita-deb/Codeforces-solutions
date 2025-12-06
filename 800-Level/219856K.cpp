#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2,res;
        cin>>s1>>s2;

        int size=min(s1.size(),s2.size());
        for(int i=0; i<size; i++)
        {
            res=res+s1[i];
            res=res+s2[i];
        }

        if(s1.size()>s2.size())
        {
            res=res+s1.substr(size);
        }
        else
        {
            res=res+s2.substr(size);
        }

        cout<<res<<endl;

    }
}
