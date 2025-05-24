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
        int a=s[0]-'0';
        //  cout<<a<<endl;
        if(s.size()==4)
        {
            cout<<10*a<<endl;
        }
        else if(s.size()==1)
        {
            cout<<10*(a-1)+1<<endl;
        }
        else if (s.size()==2)
        {
            cout<<10*(a-1)+3<<endl;
        }
        else if (s.size()==3)
        {
            cout<<10*(a-1)+6<<endl;
        }










    }














}
