#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,c,mWon=0,cWon=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>m>>c;
        if(m>c)
        {
            mWon++;
        }
        if(c>m)
        {
            cWon++;
        }
    }

    if(mWon>cWon)
    {
        cout<<"Mishka";
    }
    if(cWon>mWon)
    {
        cout<<"Chris";
    }
    if(cWon==mWon)
    {
        cout<<"Friendship is magic!^^";
    }



}
