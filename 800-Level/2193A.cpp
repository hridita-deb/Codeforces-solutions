#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,s,x;
        cin>>n>>s>>x;
        vector<long long>v(n);
        long long sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum=sum+v[i];
        }

        if(s<sum)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int need=s-sum;
            if(need%x==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }





    }
}
