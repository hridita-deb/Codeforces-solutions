#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        int sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum=sum+v[i];
        }

        double avg=(double)sum/n;

        if(avg==x)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
