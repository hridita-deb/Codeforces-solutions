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
        int pos=-1;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];

        }
        for(int i=0; i<n; i++)
        {
            if(v[i]==n)
            {
                pos=i;
                break;
            }
        }
        if(pos!=0)
        {
            swap(v[0],v[pos]);
        }
        for(auto it:v)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
