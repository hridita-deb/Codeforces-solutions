#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long s=n*k;
        vector<long long>v(s);
        for(int i=0; i<s; i++)
        {
            cin>>v[i];
        }
        long long sum=0;
        while(k--)
        {
            s=s-(n/2+1);
            sum=sum+v[s];
        }
        cout<<sum<<endl;

    }
}
