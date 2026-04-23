#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int mid=n+1;
        for(int i=1; i<=n; i++)
        {
            cout<<i<<" "<<mid<<" "<<mid+1<<" ";
            mid=mid+2;
        }
        cout<<endl;



    }
}
