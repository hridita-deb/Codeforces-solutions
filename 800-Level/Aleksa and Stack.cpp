#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t ;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;

        vector<int>v;
        int num=1;
        for(int i=0; i<n; i++)
        {

            v.push_back(num);
            num=num+2;
        }

        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

}
