#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,c;
    cin>>n>>c;

    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int count=1;

    for(int i=1; i<n; i++)
    {

        if(v[i]-v[i-1]<=c)
        {
            count++;
        }
        else
        {
            count=1;
        }
    }

    cout<<count<<endl;

}
