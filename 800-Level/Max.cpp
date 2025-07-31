#include<bits/stdc++.h>
using namespace std;
int main ()
{

    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }


    int max=v[0];
    for(int i=1; i<n; i++)
    {
        if(max<v[i])
        {
            max=v[i];
        }
    }
    cout<<max<<endl;
}
