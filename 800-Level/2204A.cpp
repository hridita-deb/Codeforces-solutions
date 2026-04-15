#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        string s;
        cin>>s;
        int a=0,b=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='R')
            {
                a=i;
                break;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(s[i]=='L')
            {
                b=i;
                break;
            }
        }


        cout<<a+b+1<<endl;

    }
}
