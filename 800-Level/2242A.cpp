#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector < int > v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(),v.rend());
        /*     if(n==1)
             {
                 if(v[0]>2)
                 {
                     cout<<"YES"<<endl;
                 }
                 else
                 {
                     cout<<"NO"<<endl;
                 }
             }
             else
             {
                 if(v[0]>1 || v[1]>1)
                 {
                     cout<<"YES"<<endl;
                 }
                 else
                 {
                     cout<<"NO"<<endl;
                 }
             }*/
             int a,b;
             if(n==1){
                 a=v[0];
                 b=0;
             }
             else{
                a=v[0];
                b=v[1];
             }

        if(a>2)
        {
            cout<<"YES"<<endl;
        }
        else if (a>1 && b>1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }




    }
}
