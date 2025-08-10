#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,c;
        cin>>n>>c;

        int x;
        int coins=0;

        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x>c)
            {
                coins++;
            }
            else
            {
                v.push_back(x);
            }
        }


        int multiplier=1;
        sort(v.rbegin(),v.rend());

        for(int i=0; i<v.size(); i++)
        {
            if(multiplier*v[i]<=c)
            {
                multiplier=multiplier*2;
            }
            else
            {
                coins++;
            }
        }


        cout<<coins<<endl;
    }
}























