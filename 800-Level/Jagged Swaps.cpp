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


        int changed=1;
        while(changed==1)
        {
            changed=0;
            for(int i=1; i<n-1; i++)
            {
                if(v[i]>=v[i-1] && v[i]>=v[i+1])
                {
                    swap(v[i],v[i+1]);
                    changed=1;
                }
            }
        }


        int count=0;
        for(int i=1; i<n-1; i++)
        {
            if(v[i]<v[i-1])
            {
                count=1;
                break;
            }
        }


        if(count==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
