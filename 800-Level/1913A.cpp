#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        string s,a,b;
        cin>>s;

        int breakPoint=-1;
        for(int i=1; i<s.size(); i++)
        {
            if(s[i]!='0')
            {
                breakPoint=i;
                break;
            }
        }


        if(breakPoint==-1)
        {
            cout<<-1<<endl;
        }

        else
        {

            a=s.substr(0,breakPoint);
            b=s.substr(breakPoint);

            int a1=stoi(a);
            int b1=stoi(b);

            if(a1<b1)
            {
                cout<<a1<<" "<<b1<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }


        }
    }
}






















