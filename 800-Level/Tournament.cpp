#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n,j,k;
        cin>>n>>j>>k;


        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }


        int max=v[0];
        for(int i=0; i<n; i++)
        {
            if(max<v[i])
            {
                max=v[i];
            }
        }


        if(k>1)
        {
            cout<<"YES"<<endl;
        }


        if(k==1)
        {
            if(max==v[j-1])
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










