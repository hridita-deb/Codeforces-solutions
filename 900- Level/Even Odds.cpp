#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n,k;
    cin>>n>>k;


    long long odd_count;
    if(n%2==0)
    {
        odd_count=n/2;
    }
    else
    {
        odd_count=(n/2)+1;
    }


    if(k<=odd_count)
    {
        long long odd_num=k+(k-1);
        cout<<odd_num<<endl;
    }
    else
    {
        long long even_num=2*(k-odd_count);
        cout<<even_num<<endl;
    }


}































