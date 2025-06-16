#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    vector<int>v(n);


    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum=sum+v[i];
    }

    sort(v.rbegin(),v.rend());

    int my_sum=0;
    int count=0;

    for(int i=0; i<n; i++)
    {
        if(my_sum<=sum/2)
        {
            count++;
        }
        my_sum=my_sum+v[i];
    }

    cout<<count<<endl;
}
