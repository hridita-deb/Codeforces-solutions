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

    for(int i=0; i<n; i++)
    {
        v[i]=v[i]+k;
    }


    int count=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]<=5)
        {
            count++;
        }
    }


 int result=count/3;
        cout<<result<<endl;


}
