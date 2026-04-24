#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    vector<long long>p;
    vector<bool>isPrime(200000,true);

    for(long long i=2; p.size()<10005; i++)
    {
        if(isPrime[i])
        {
            p.push_back(i);
            for(long long j=i*i; j<200000; j=j+i)
            {
                isPrime[j]=false;
            }
        }
    }


    while(t--)
    {
        int n;
        cin>>n;


        for(int i=0; i<n; i++)
        {
            cout<<p[i]*p[i+1]<<" ";
        }
        cout<<endl;

    }
}







