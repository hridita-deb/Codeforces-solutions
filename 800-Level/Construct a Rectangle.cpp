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

        if((a==b && c%2==0) || (a==c && b%2==0) || (c==b && a%2==0) || (a+b==c) ||   (a+c==b) || (c+b==a) )
        {

            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

}
