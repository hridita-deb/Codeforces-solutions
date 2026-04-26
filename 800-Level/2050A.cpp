#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n,m;
        cin>>n>>m;

        int sum=0;
        int count=0;
        int end=0;

        while(n--)
        {
            string s;
            cin>>s;

            if(end!=1 && sum+s.size()<=m)
            {
                sum=sum+s.size();
                count++;
            }
            else
            {
              end=1;
            }
        }

        cout<<count<<endl;
    }
}
