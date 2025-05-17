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
        vector<int>s;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];

        }
        sort(v.begin(),v.end());
        int count=1;
int ans=-1;
        for(int i=1; i<n; i++)
        {
            if(v[i-1]==v[i]){
           count++;
           if(count>=3){
            ans=v[i];
           }
            }
            else
            {
                count=1;
            }
        }



            cout<<ans<<endl;

    }

}

