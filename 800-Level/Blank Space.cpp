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

        int curSize=0,maxSize=0;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];

            if(v[i]==0)
            {
                curSize++;
            }
            else
            {
                curSize=0;
            }

            maxSize=max(curSize,maxSize);
        }

        cout<<maxSize<<endl;
    }

}












