#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long n,sum=0,digit_sum=0;
        cin>>n;

        long long temp=n;

        while(temp>0)
        {
            sum=sum+temp;
            digit_sum=digit_sum+(temp%10);
            temp=temp/10;
        }

        int sum2=0;
        while(digit_sum>0)
        {
            sum2=sum2+digit_sum;
            digit_sum=digit_sum/10;
        }

        long long answer=sum+(sum2/10);
        cout<<answer<<endl;
    }
}
