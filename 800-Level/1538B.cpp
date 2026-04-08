#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;

        vector<long long>v(n);
        long long sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum=sum+v[i];
        }

        if(sum%n!=0)
        {
            cout<<-1<<endl;
        }

        else
        {
            int count=0;
            for(int i=0; i<n; i++)
            {
                int a=sum/n;
                if(v[i]>a)
                {
                    count++;
                }
            }
            cout<<count<<endl;
        }



    }
}
