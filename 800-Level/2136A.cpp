#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c,d;
        cin>>a>>b>>c>>d;

        if(  a>  2*(b+1)  )
        {
            cout<<"NO"<<endl;
        }
        else  if(  b>  2*(a+1)  )
        {
            cout<<"NO"<<endl;
        }
        else  if(  (c-a)>  2*(  (d-b)+1)  )
        {
            cout<<"NO"<<endl;
        }
        else  if(  (d-b)>  2*(  (c-a)+1)  )
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }



    }
}
