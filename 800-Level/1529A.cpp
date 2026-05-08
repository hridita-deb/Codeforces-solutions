#include <bits/stdc++.h>
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
        int min=*min_element(v.begin(),v.end());

        int cnt_min=count(v.begin(),v.end(),min);

        cout<<n-cnt_min<<endl;








    }
}
