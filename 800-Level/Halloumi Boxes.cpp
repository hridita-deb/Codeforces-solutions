#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int unmatched=0;
        for(int i=0; i<n-1; i++)
        {
            if(k<2)
            {
                if(v[i]>v[i+1])
                {
                    unmatched++;
                }
            }
        }
        if(unmatched==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }






    }
}
