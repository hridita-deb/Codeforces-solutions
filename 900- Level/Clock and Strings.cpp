#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int minimum=min(a,b);
        int maximum=max(a,b);

        vector<int>v;

        for(int i=minimum; i<=maximum; i++)
        {
            v.push_back(i);
        }


        int found_c=0,found_d=0;
        for(int i=0; i<v.size(); i++)
        {
            if(c==v[i])
            {
                found_c=1;
            }
            if(d==v[i])
            {
                found_d=1;
            }
        }

        if((found_c==1 && found_d==0) || (found_c==0 && found_d==1))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

}





