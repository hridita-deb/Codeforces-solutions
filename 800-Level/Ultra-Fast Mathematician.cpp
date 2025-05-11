#include<bits/stdc++.h>
using namespace std;
int main()
{

    string m,n;
    cin>>m>>n;

    for(int i=0; i<m.size(); i++)
    {

        int a=m[i]-'0';
        int b=n[i]-'0';
        if(a-b==1 || a-b==-1)
        {
            cout<<"1";

        }
        else
        {
            cout<<"0";

        }
    }

}

