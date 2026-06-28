#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);


        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        sort(v.begin(),v.end());

        if(v[0]!=1)
        {
            cout<<"NO"<<endl;
        }
        else
        {

            int sum=1;
            int f=0;
            for(int i=1; i<n; i++)
            {
                if(sum<v[i])
                {
                    f=1;
                    break;
                }
                sum=sum+v[i];
            }

            if(f==1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }









    }
}