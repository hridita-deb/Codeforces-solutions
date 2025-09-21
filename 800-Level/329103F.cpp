#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }


    int first=0,last=n-1;
    while(first<=last)
    {
        if(first==last)
        {
            cout<<v[first];
        }
        else
        {
            cout<<v[first]<<" "<<v[last]<<" ";
        }
        first++;
        last--;
    }

}
