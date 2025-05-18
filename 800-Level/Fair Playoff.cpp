

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

        int max_1=max(a,b) ;
        int max_2=max(c,d) ;

        vector<int>v= {a,b,c,d};
        sort(v.begin(),v.end());
        int max_1st=v[3];
        int max_2nd=v[2];

        if((max_1==max_1st || max_1==max_2nd) && (max_2==max_1st || max_2==max_2nd))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}













