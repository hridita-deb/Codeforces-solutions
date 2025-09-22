#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int a[3];
        for(int i=0; i<3; i++)
        {
            cin>>a[i];
        }
        int max=a[0],min=a[0];
        for(int i=0; i<3; i++)
        {
            if(max<a[i])
            {
                max=a[i];
            }
            if(min>a[i])
            {
                min=a[i];
            }
        }
//cout<<max<<" "<<min;
        for(int i=0; i<3; i++)
        {
            if(a[i]!=max && a[i]!=min)
            {
                cout<<a[i]<<endl;
            }
        }

    }
}