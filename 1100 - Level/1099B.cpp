#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long sqroot=sqrt(n) ;
    if(sqroot*sqroot==n)
    {
        cout<<sqroot+sqroot<<endl;
    }
    else if(n<=sqroot*(sqroot+1))
    {
        cout<<sqroot+sqroot+1 <<endl;
    }
    else{
        cout<<sqroot+sqroot+2<<endl;
    }
}
