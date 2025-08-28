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

        sort(v.begin(),v.end());


        int firstHalf=0,secondHalf=0;

        if(n%2!=0)
        {
            int a=n/2;
            for(int i=0; i<a; i++)
            {
                firstHalf=firstHalf+v[i];
            }
            for(int i=a+1; i<n; i++)
            {
                secondHalf=secondHalf+v[i];
            }
        }

        else
        {
            int a=n/2;
            for(int i=0; i<a; i++)
            {
                firstHalf=firstHalf+v[i];
            }
            for(int i=a; i<n; i++)
            {
                secondHalf=secondHalf+v[i];
            }
        }


        cout<<secondHalf-firstHalf<<endl;
    }
}

























