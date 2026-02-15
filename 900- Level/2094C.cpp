#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int v[n][n];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> v[i][j];
            }
        }

        set<int> st;
        vector<int>v1;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(st.find(v[i][j]) == st.end())
                {
                    st.insert(v[i][j]);
                    v1.push_back(v[i][j]);

                }
            }
        }


        int x=0;
        for(int i=1; i<=2*n; i++)
        {
            if(st.find(i) == st.end())
            {
                x=i;
                break;

            }
        }

        cout<<x<<" ";
        for(auto it:v1)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}




