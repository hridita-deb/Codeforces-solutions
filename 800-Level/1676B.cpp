#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        vector<int>v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        int min=v[0];

        for(int i=1; i<n; i++)
        {


            if(min>v[i])
            {
                min=v[i];

            }

        }


        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum=sum+(v[i]-min);
        }
        cout<<sum<<endl;
    }
}

