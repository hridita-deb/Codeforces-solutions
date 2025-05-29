#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n,a,b;
        cin>>n>>a>>b;

        int mainPrice=n*a;
        int disPrice;

        if(n%2==0)
        {
            disPrice=b*(n/2);
        }

        if(n%2!=0)
        {
            disPrice=(b*(n/2))+a;
        }

        if(mainPrice>=disPrice)
        {
            cout<<disPrice<<endl;
        }
        else
        {
            cout<<mainPrice<<endl;
        }


    }
}
