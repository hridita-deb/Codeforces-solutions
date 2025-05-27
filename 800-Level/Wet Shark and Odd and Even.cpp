#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n;
    cin>>n;

    vector<int>v(n);
    vector<int>odd;

    long long sum=0;

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum=sum+v[i];
    }

    for(int i=0; i<n; i++)
    {
        if(v[i]%2!=0)
        {
            odd.push_back(v[i]);
        }
    }


    if(sum%2==0)
    {
        cout<<sum<<endl;
    }

    else
    {
        long long min_odd=odd[0];
        for(int i=0; i<odd.size(); i++)
            if(odd[i]<min_odd)
            {
                min_odd=odd[i];
            }
        cout<<sum-min_odd<<endl;
    }



}
