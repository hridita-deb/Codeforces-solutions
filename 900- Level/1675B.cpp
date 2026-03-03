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
        int count=0;
        int possible=1;
        for(int i=n-2; i>=0; i--)
        {
            while (v[i]>=v[i+1] && v[i]>0)
            {
                v[i]=v[i]/2;
                count++;
            }
            if(v[i]==v[i+1])
            {
                possible=0;
                break;
            }
        }

        if(possible==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<count<<endl;
        }
    }
}
