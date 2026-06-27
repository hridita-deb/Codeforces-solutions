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



        int c=0,pos=-1;
        for(int i=1; i<n; i++)
        {
            if(v[i-1]>v[i])
            {
                c++;
                pos=i-1;
            }
        }

        if(c>1)
        {
            cout<<"NO"<<endl;
        }


        else  if(c==0)
        {
            cout<<"YES"<<endl;
        }


        else
        {
            int found1=1,found2=1;

            if(pos>0 && pos+1<n)
            {
                if(v[pos-1]>v[pos+1])
                {
                    found1=0;
                }
            }


            if(pos+2<n)
            {
                if(v[pos]>v[pos+2])
                {
                    found2=0;
                }
            }


            if(found1==1 || found2==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }


    }
}