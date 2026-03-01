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
        int ans=0;

        if(n%2==0)
        {
            ans=n+(2*k);
        }
        else
        {
            vector<int>div;
            for(int i=1; i*i<=n; i++)
            {
                if(n%i==0)
                {
                    div.push_back(i);
                    if(n/i!=i)
                    {
                        div.push_back(n/i);
                    }
                }
            }
            sort(div.begin(),div.end());
            ans=n+div[1]+2*(k-1);
        }
        cout<<ans<<endl;
    }
}
