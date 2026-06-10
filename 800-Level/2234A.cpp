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

        sort(v.rbegin(),v.rend());

        if(n==2)
        {
            cout<<v[0]<<" "<<v[1]<<endl;
        }
        else
        {

            int rem=v[0]%v[1];
            int found=0;

            for(int i=2; i<n; i++)
            {
                if(rem==v[i])
                {
                    rem=v[i-1]%v[i];
                }
                else
                {
                    found=1;
                    break;
                }
            }

            if(found==0)
            {
                cout<<v[0]<<" "<<v[1]<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
    }
}
