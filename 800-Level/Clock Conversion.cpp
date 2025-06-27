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

        string hour=s.substr(0,2);
        string minute=s.substr(3,2);

        int hr=stoi(hour);

        int new_hr=hr;
        if(hr>12)
        {
            new_hr=hr-12;
        }

        if(hr==0)
        {
            new_hr=hr+12;
        }

        string h=to_string(new_hr);
        if(h.size()<2)
        {
            h='0' + h;
        }


        if(hr>=12)
        {
            cout<<h<<":"<<s[3]<<s[4]<<" PM"<<endl;
        }
        else
        {
            cout<<h<<":"<<s[3]<<s[4]<<" AM"<<endl;
        }

    }
}
