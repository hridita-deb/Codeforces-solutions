#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int year;
        cin>>year;

        int root=sqrt(year);

        if(root*root!=year)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<"0"<<" "<<root<<endl;
        }
    }

}
