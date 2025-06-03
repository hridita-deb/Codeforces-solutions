#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,a,b,c,d,count;
    cin>>t;
    for(int i=0; i<t; i++)
    {

        cin>>a>>b>>c>>d;

        count=0;
        if(a<b)
        {
            count++;
        }
        if(a<c)
        {
            count++;
        }
        if(a<d)
        {
            count++;
        }
        cout<<count<<endl;
    }
    // cout<<count;
}

