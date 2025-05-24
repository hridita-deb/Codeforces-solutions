/*#include<bits/stdc++.h>
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
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int max=v[0];
        for(int i=0; i<n; i++)
        {
            if(v[i]>max)
            {
                max=v[i];
            }
        }

        cout<<max<<endl;







    }
}*/


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
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
sort(v.rbegin(),v.rend());
int diff=0;
 for(int i=0; i<n-1; i++)
        {
           // cout<<v[i]<<" ";
           diff=diff+(v[i]-v[i+1]);
        }

cout<<diff<<endl;
    }
}
















