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

        string s;
        cin>>s;
        sort(s.begin(),s.end());

        int count=2;
        for(int i=1; i<n; i++)
        {
            if(s[i]==s[i-1])
            {
                count++;
            }
            else
            {
                count=count+2;
            }
        }


        cout<<count<<endl;
    }
}
