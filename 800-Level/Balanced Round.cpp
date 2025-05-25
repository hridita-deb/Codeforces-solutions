#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        int current=1,maximum=1;
        for(int i=0; i<n-1; i++)
        {

            if(v[i]-v[i+1]<=k)
            {
                current++;
                maximum=max(current,maximum);
            }
            else
            {
                current=1;
            }
        }
        cout<<n-maximum<<endl;
    }

}
