

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
        if( s.size()>=3  && s[0]=='1' && s[1]=='0')
        {


            if( s.size()==3 )
            {
                if(s[2]>'1')
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }


            if( s.size()>3 )
            {
                if(s[2]>'0')
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }


        }



        else
        {
            cout<<"NO"<<endl;
        }


    }
}
