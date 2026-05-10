#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        long long a,b,c;
        cin>>a>>b>>c;

        int found=0;
        if((a+c)/(2*b)>0 && (a+c)%(2*b)==0)
        {
            found=1;
        }
        else if(((2*b-c)/a)>0 && ((2*b-c)%a)==0)
        {
            found=1;
        }
        else if(((2*b-a)/c)>0 && ((2*b-a)%c)==0)
        {
            found=1;
        }


        if(found==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
