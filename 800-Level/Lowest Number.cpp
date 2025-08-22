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

    int min=v[0];
    int min_index=0;
    for(int i=1; i<n; i++)
    {
        if(v[i]<min)
        {
            min=v[i];
            min_index=i;
        }
    }

    cout<<min<<" "<<min_index+1<<endl;



}
