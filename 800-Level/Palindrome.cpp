#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n;
    cin>>n;

    int temp=n;
    int rev=0;
    while(n>0)
    {
        int lastDigit=n%10;
        rev=rev*10+lastDigit;
        n=n/10;
    }

    cout<<rev<<endl;
    if(rev==temp)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

1}
