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

        int odd_sum=0;
        int even_sum=0;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]%2==0)
            {
                even_sum=even_sum+v[i];
            }
            else
            {
                odd_sum=odd_sum+v[i];
            }
        }

        if(even_sum>odd_sum)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
