#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;

        long long sum=0;
        if(n%2050==0)
        {
            long long res=n/2050;
            while(res>0)
            {
                long long lastDigit=res%10;
                sum=sum+lastDigit;
                res=res/10;
            }
            cout<<sum<<endl;
        }


        else
        {
            cout<<-1<<endl;
        }
    }
}
