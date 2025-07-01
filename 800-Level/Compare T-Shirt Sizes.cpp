#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string p,q;
        cin>>p>>q;



        if((p[p.size()-1]=='S' && q[q.size()-1]=='M') || (p[p.size()-1]=='M' && q[q.size()-1]=='L') || (p[p.size()-1]=='S' && q[q.size()-1]=='L'))
        {
            cout<<"<"<<endl;
        }

        if((p[p.size()-1]=='M' && q[q.size()-1]=='S') || (p[p.size()-1]=='L' && q[q.size()-1]=='M') || (p[p.size()-1]=='L' && q[q.size()-1]=='S'))
        {
            cout<<">"<<endl;
        }

        if((p[p.size()-1]=='S' && q[q.size()-1]=='S' ) )
        {
            if(p.size()>q.size())
            {
                cout<<"<"<<endl;
            }
            else if(p.size()<q.size())
            {
                cout<<">"<<endl;
            }
        }


        if((p[p.size()-1]=='L' && q[q.size()-1]=='L' ) )
        {
            if(p.size()>q.size())
            {
                cout<<">"<<endl;
            }
            else if (p.size()<q.size())
            {
                cout<<"<"<<endl;
            }
        }

        if(p==q)
        {
            cout<<"="<<endl;
        }
    }
}

