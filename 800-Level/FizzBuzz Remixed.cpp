#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    int a[t];
    for(int i=0; i<t; i++)
    {
        cin>>a[i];
    }




    for(int i=0; i<t; i++)
    {
        int count=0;

        for(int j=0; j<=a[i]; j++)
        {
            if(j%3==j%5)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }




}
