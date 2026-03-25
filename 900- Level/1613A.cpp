#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string a;
        int b;
        cin>>a>>b;


        string c;
        int d;
        cin>>c>>d;

        int s1=a.size()+b;
        int s2=c.size()+d;



        if(s1<s2)
        {
            cout<<"<"<<endl;
        }
        else if(s1>s2)
        {
            cout<<">"<<endl;
        }
        else
        {
            while(a.size()<c.size())
            {
                a=a+'0';
            }
            while(a.size()>c.size())
            {
                c=c+'0';
            }
            if(a<c)
            {
                cout<<"<"<<endl;
            }
            else if(a>c)
            {
                cout<<">"<<endl;
            }
            else
            {
                cout<<"="<<endl;
            }
        }
    }
}
