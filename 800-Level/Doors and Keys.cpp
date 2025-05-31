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

        int index_r=0,index_b=0,index_g=0,index_R=0,index_B=0,index_G=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='r')
            {
                index_r=i;
            }
            if(s[i]=='b')
            {
                index_b=i;
            }
            if(s[i]=='g')
            {
                index_g=i;
            }
            if(s[i]=='R')
            {
                index_R=i;
            }
            if(s[i]=='B')
            {
                index_B=i;
            }
            if(s[i]=='G')
            {
                index_G=i;
            }
        }


        if(index_r<index_R && index_b<index_B && index_g<index_G )
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
