#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;

    int right=0,count_upper=0;

    for(int i=0; i<s.size(); i++)
    {

        if(s[i]==toupper(s[i]))
        {
            count_upper++;
        }

    }

    if(count_upper==s.size())
    {
        right=1;
    }


    else if(s[0]==tolower(s[0]))
    {

        count_upper=0;

        for(int i=1; i<s.size(); i++)
        {
            if(s[i]==toupper(s[i]))
            {
                count_upper++;
            }
        }

        if(count_upper==s.size()-1)
        {
            right=2;
        }
    }


    if(right==1)
    {

        for(int i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;

    }


    else if(right==2)
    {

        s[0]=toupper(s[0]);

        for(int i=1; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;

    }


    else
    {
        cout<<s<<endl;
    }

}
