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

        int found=0;
        for(int i=1; i<n; i++)
        {
            if(v[i]%2==0 && v[i-1]%2==0)
            {
                found=1;
                break;
            }
            if(v[i]%2!=0 && v[i-1]%2!=0)
            {
                found=1;
                break;
            }
        }

        if(found==0)
        {

            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }



    }
}
