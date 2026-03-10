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

        int sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum=sum+v[i];
        }

        if(sum==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;

            if(sum>0)
            {
                sort(v.rbegin(),v.rend());
                for(auto it: v)
                {
                    cout<<it<<" ";
                }
                cout<<endl;
            }

            else
            {
                sort(v.begin(),v.end());
                for(auto it: v)
                {
                    cout<<it<<" ";
                }
                cout<<endl;
            }
        }



    }
}


