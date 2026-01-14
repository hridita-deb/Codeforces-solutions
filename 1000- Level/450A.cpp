#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int max_round=0,index=0;

    for(int i=0; i<n; i++)
    {
        int a=ceil((double)v[i]/k);
        if(a>=max_round)
        {
            max_round=a;
            index=i;
        }

    }


    cout<<index+1<<endl;
}
