#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int a=v[0]+v[1];
        int found1=0,f2=0;

        if(a>d)
        {
            found1=1;
        }
        for(int i=0; i<n; i++)
        {
            if(v[i]>d)
            {
                f2=1;
                break;
            }
        }

        cout<<a<<endl;
        if(found1==0 || f2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }











    }
}
