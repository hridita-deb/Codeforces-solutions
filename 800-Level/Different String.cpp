#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    string temp1;
    string temp2;

    while(t--)
    {
        string s;
        cin>>s;

        temp1=s;
        temp2=s;

        reverse(temp1.begin(),temp1.end());
        sort(temp2.begin(),temp2.end());

        if(s==temp1 && s==temp2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            if(s==temp1)
            {
                cout<<temp2<<endl;
            }
            else
            {

                cout<<temp1<<endl;

            }
        }

    }
}
