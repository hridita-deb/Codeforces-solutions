#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n;
    cin>>n;
    long long power=log2(n);
    long long b=pow(2,power);
    if(b==n)
    {
        cout<<"YES"<<endl;
    }

    else
    {
        cout<<"NO"<<endl;
    }
}
