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

        vector<int>v;
        for(int i=0; i<n; i++)
        {
            v.push_back(i+1);
        }

        if(n%2==0 )
        {

            sort(v.rbegin(),v.rend());

            for(int i=0; i<n; i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }

        if(n%2!=0)
        {
            sort(v.rbegin(),v.rend());
            int mid = n/2;
            swap(v[mid], v[mid+1]);
            for(int i=0; i<n; i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
}
