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
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];

        }

        int min=a[0];
        int min_index=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]<min)
            {
                min=a[i];
                min_index=i;
            }
        }

        int max=a[0];
        int max_index=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]>max)
            {
                max=a[i];
                max_index=i;
            }
        }

        int max_count=0;
        int min_count=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==max)
            {
                max_count++;
            }
            if(a[i]==min)
            {
                min_count++;
            }
        }

        if(max_count>min_count)
        {
            cout<<min_index+1<<endl;
        }
        else
        {
            cout<<max_index+1<<endl;
        }
    }

}
