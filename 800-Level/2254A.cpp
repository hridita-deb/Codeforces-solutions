#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        vector<long long>v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);

        sort(v.begin(),v.end());
        int ans=0;
while(1){
       if(v[0]==v[1] || v[0]==v[2] || v[1]==v[2])
        {

            break;
        }
        else{
            v[0]++;
            v[2]--;
            ans++;

        }
}
   cout<<ans<<endl;

    }
}
