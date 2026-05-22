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

        int even_count=0,odd_count=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]%2==0)
            {
                even_count++;
            }
            else
            {
                odd_count++;
            }
        }
        cout<<min(even_count,odd_count)<<endl;


    }
}
