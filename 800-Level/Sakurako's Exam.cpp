#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int a,b;
        cin>>a>>b;
        int size=a+b;
        vector<int>v;
        for(int i=0; i<a; i++)
        {
            v.push_back(1);
        }

        for(int i=0; i<b; i++)
        {
            v.push_back(2);
        }
        int sum=0;
        for(int i=0; i<v.size(); i++)
        {
            sum=sum+v[i];

        }
        if(sum%2!=0)
        {
            cout<<"No"<<endl;
        }
        else
        {
            int sum_half=sum/2;
            if(sum_half%2==0 || (sum_half%2==1 && a!=0))
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }

        }
    }

}
