#include<bits/stdc++.h>
using namespace std;
int main()
{



    long long two,three,five,six;
    cin>>two>>three>>five>>six;

    long long a=min(two,min(five,six));
    long long rem_two=abs(two-a);
    long long b=min(three,rem_two);

    long long ans=a*256+b*32;
    cout<<ans<<endl;





}
