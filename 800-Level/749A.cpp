#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    if(n%2==0)
    {
        int a=n/2;
        cout<<a<<endl;
        while(a--)
        {
            cout<<2<<" ";
        }
    }
    else
    {
        int a=n/2-1;
        cout<<a+1<<endl;
        while(a--)
        {
            cout<<2<<" ";
        }
        cout<<3;
    }
}
















