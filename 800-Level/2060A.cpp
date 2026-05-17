#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int a1,a2,a4,a5;
        cin>>a1>>a2>>a4>>a5;


        vector<int>v;
        v.push_back(a1+a2);
        v.push_back(a2-a1);
        v.push_back(a4-a2);

        int ans=0;
        for(int i=0; i<v.size(); i++)
        {

            int mid=v[i];
            int count=0;

            if(mid==a1+a2)
            {
                count++;
            }
            if(a4==mid+a2)
            {
                count++;
            }
            if(a5==mid+a4)
            {
                count++;
            }

            ans=max(ans,count);
        }


        cout<<ans<<endl;

    }
}
