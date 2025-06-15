#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    vector<int>v(n);

    vector<int>odd_index;
    vector<int>even_index;

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]%2==0)
        {
            even_index.push_back(i+1);
        }
        else
        {
            odd_index.push_back(i+1);
        }
    }

    if(odd_index.size()>even_index.size())
    {
        cout<<even_index[0];
    }
    else
    {
        cout<<odd_index[0];
    }

}

