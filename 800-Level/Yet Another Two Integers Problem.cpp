#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int a,b;
        cin>>a>>b;

        if(a==b)
        {
            cout<<"0"<<endl;
        }

        else
        {
            if(a<b)
            {
                int d=(b-a);
                if(d%10==0)
                {
                    cout<<d/10<<endl;
                }

                else
                {
                    cout<<(d/10)+1<<endl;
                }
            }
            if(a>b)
            {
                int e=(a-b);
                if(e%10==0)
                {
                    cout<<e/10<<endl;
                }

                else
                {
                    cout<<(e/10)+1<<endl;
                }
            }

        }
    }
}
