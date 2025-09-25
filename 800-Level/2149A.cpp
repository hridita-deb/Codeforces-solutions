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

        int count_negone=0;
        int zero=0;

        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]==0)
            {
                zero++;
            }
            if(v[i]==-1)
            {
                count_negone++;
            }
        }

        if(count_negone%2!=0)
        {
            cout<<zero+2<<endl;
        }
        else
        {
            cout<<zero<<endl;
        }
    }
}
