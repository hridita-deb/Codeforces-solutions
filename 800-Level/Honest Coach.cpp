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
        vector<int>v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        int diff=v[0]-v[1];
        for(int i=1;i<n-1;i++){
      if(diff>(v[i]-v[i+1])){
        diff=v[i]-v[i+1];
      }
        }
        cout<<diff<<endl;



    }
}
