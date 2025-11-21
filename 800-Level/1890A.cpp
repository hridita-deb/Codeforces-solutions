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
        map<int,int>mp;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }


        if(mp.size()>=3)
        {
            cout<<"NO"<<endl;
        }

        else
        {
            int first_element_count=mp.begin()->second;
            int second_element_count=next(mp.begin())->second;

            if((n%2==0 && first_element_count==second_element_count) || first_element_count==n)
            {
                cout<<"YES"<<endl;
            }
            else if(n%2==1 && abs(first_element_count-second_element_count)==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }

    }
}
