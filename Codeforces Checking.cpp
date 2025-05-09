#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char c;
        cin>>c;
        string s="codeforces";
        int count=0;
        for(int i=0; i<s.size(); i++)
        {
            if(c==s[i])
            {
                count=1;
            }

        }
        if(count==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
