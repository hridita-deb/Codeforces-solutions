#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {

        int x,k;
        cin>>x>>k;
        vector<int>v;
        for(int i=1; i<=x; i++)
        {
            if(i%k!=0)
            {
                v.push_back(i);
            }
        }


        /* for(int i=0;i<v.size();i++){
             cout<<v[i]<<" ";
         }

        cout<<endl;*/

        int max=v[0];

        for(int i=1; i<v.size(); i++)
        {
            if(v[i]>=max)
            {
                max=v[i];
            }
        }

int count=1;
int need=x-max;
int found=0;
for(int i=0;i<v.size();i++){
    if(need==v[i]){
        count++;
        found=1;
    }
}

if(found==0){
    cout<<count<<endl;
    cout<<max<<endl;
}
else{
        cout<<count<<endl;
    cout<<max<<" "<<need<<endl;
}


    }
}
