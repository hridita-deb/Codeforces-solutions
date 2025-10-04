#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a;
    cin>>a;

    int ans=a;

    while(ans>=a)
    {
        int temp=ans;
        int sum=0;

        while(temp>0)
        {
            int lastDigit=temp%10;
            sum=sum+lastDigit;
            temp=temp/10;
        }

        if(sum%4==0)
        {
            cout<<ans<<endl;
            break;
        }
        else
        {
            ans++;
        }

    }
}
