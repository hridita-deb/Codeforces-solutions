#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    int sum_a=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum_a=sum_a+a[i];
    }

    int sum_b=0;
    vector<int>b(m);
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
        sum_b=sum_b+b[i];
    }

    if(sum_a==sum_b)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
