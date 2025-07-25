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

    int min=v[0],max=v[0];
    int count=0;
    for(int i=1; i<n; i++)
    {
        if(v[i]<min)
        {
            count++;
            min=v[i];
        }
        if(v[i]>max)
        {
            count++;
            max=v[i];
        }
    }

    cout<<count<<endl;
}
