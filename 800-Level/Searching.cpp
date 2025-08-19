#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int x;
    cin>>x;

    int index=-1;
    for (int i=0; i<n; i++)
    {
        if(x==v[i])
        {
            index=i;
            break;
        }
    }

    cout<<index<<endl;



}
