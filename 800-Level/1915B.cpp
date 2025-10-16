#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        char ch[3][3];

        vector<char>a;
        vector<char>b;
        vector<char>c;

        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cin>>ch[i][j];
                if(ch[i][j]=='A')
                {
                    a.push_back(ch[i][j]);
                }
                else if(ch[i][j]=='B')
                {
                    b.push_back(ch[i][j]);
                }
                else   if(ch[i][j]=='C')
                {
                    c.push_back(ch[i][j]);
                }
            }
        }


        if(a.size()<b.size() )
        {
            cout<<"A"<<endl;
        }

        else if(a.size()>b.size() )
        {
            cout<<"B"<<endl;
        }
        else
        {
            cout<<"C"<<endl;
        }
    }
}
