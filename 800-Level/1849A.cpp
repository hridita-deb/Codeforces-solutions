#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int need=a-1;
        if(need<=b+c)
        {
            cout<<a+need<<endl;
        }
        else
        {
            cout<<b+c+b+c+1<<endl;
        }
    }




}
