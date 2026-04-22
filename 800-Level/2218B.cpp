#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<long long>v(7);
        long long sum=0;
        for(int i=0; i<7; i++)
        {
            cin>>v[i];
            sum=sum+v[i];
        }
        sort(v.rbegin(),v.rend());
        long long maxi=v[0];
        cout<<(2*maxi)-sum<<endl;

    }

}
