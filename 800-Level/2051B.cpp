#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        int sum=a+b+c;
        int day=(n/sum)*3;

        if(n%sum==0)
        {
            cout<<day<<endl;
        }
        else if(n%sum<=a)
        {
            cout<<day+1<<endl;
        }
        else if(n%sum<=a+b)
        {
            cout<<day+2<<endl;
        }
        else
        {
            cout<<day+3<<endl;
        }
    }
}












