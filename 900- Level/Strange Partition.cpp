#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        long long n,x;
        cin>>n>>x;
        vector<int>v(n);

        long long sum=0;
        long long sum2=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum2=sum2+v[i];
            sum=sum+ceil(v[i]/double(x));
        }


        long long minimal=ceil(sum2/double(x));
        cout<<minimal<<" "<<sum<<endl;

    }
}
