#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;

        vector<int>v(n);
        for(int i=1; i<=n; i++)
        {
            cin>>v[i];
        }

        int count=0;
        for(int i=1; i<=n; i++)
        {
            if(i==v[i])
            {
                count++;
            }
        }

        if(count==0)
        {
            cout<<"0"<<endl;
        }
        else if(count==1)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<count-1<<endl;
        }

    }
}
