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

        if(n%4!=0)
        {
            cout<<"NO"<<endl;
        }

        else
        {
            cout<<"Yes"<<endl;

            vector<int>odd;
            vector<int>even;

            for(int i=1; i<=n; i++)
            {
                if(i%2==0)
                {
                    even.push_back(i);
                }
            }

            for(int i=1; i<n-1; i++)
            {
                if(i%2!=0)
                {
                    odd.push_back(i);
                }
            }


            int even_sum=0,odd_sum=0;

            for(int i=0; i<even.size(); i++)
            {
                even_sum=even_sum+even[i];
            }

            for(int i=0; i<odd.size(); i++)
            {
                odd_sum=odd_sum+odd[i];
            }


            for(int i=0; i<even.size(); i++)
            {
                cout<<even[i]<<" ";
            }

            for(int i=0; i<odd.size(); i++)
            {
                cout<<odd[i]<<" ";
            }
            cout<<even_sum-odd_sum;
            cout<<endl;

        }
    }
}
