#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int i;
        for( i=0; i<n; i++)
        {
            if(v[i]!=n-i)
            {
                break;
            }
        }


        if (i == n)
        {
            for (auto it : v)
            {
                cout<<it<<" ";
            }
            cout<<endl;
            continue;
        }


        int target = n - i;
        int  start_pos= i;

        while (v[ start_pos] != target)
        {
            start_pos++;
        }


        reverse(v.begin() + i, v.begin() +start_pos+ 1);



        for (auto it : v)
        {
            cout<<it<<" ";
        }
        cout<<endl;

    }


}

