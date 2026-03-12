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

        int a=0,b=0;
        for(int i=0; i<n-1; i++)
        {
            cin>>v[i];
            if(v[i]>=0)
            {
                a=a+v[i];
            }
            else
            {
                b=b+v[i];
            }
        }

        int ans=(a+b);
        cout<<ans*(-1)<<endl;




    }
}
