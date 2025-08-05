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
        char ch;
        cin>>ch;
        int count=0;
        for(int i=0; i<s.size(); i++)
        {
            if(ch==s[i])
            {
                if(i%2==0)
                {
                    count=1;
                }
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
