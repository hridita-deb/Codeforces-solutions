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

        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        int count = 0;
        int i = 0;

        while(i + k - 1 < n)
        {
            int j;
            for(j = i; j < i + k; j++)
            {
                if(v[j] == 1)
                {
                    break;
                }
            }

            if(j == i + k)
            {
                count++;
                i = i + k + 1;
            }
            else
            {
                i++;
            }
        }

        cout<<count<<endl;

    }
}







