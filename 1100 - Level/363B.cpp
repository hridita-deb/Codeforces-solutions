//Solved by sliding window logic

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n,k;
    cin>>n>>k;
    vector<long long>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }


    int sum=0;
    for(int i=0; i<k; i++)
    {
        sum=sum+v[i];
    }
//    cout<<sum<<endl;



    int min_sum=sum;
    int indx=0;
    for(int i=k; i<n; i++)
    {
        sum=sum-v[i-k]+v[i];
        if(sum<min_sum)
        {
            min_sum=sum;
            indx=i-k+1;
        }
    }

    cout<<indx+1<<endl;
}

