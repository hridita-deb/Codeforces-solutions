#include<iostream>
using namespace std;
int main()
{

    int t,i=0,j=0;
    cin>>t;
    cout<<t;

    int a[t][2];

    for(i=0; i<t; i++)
    {
        for(j=0; j<2; j++)
        {
            cin>>a[i][j];
        }
    }


    for(i=0; i<t; i++)
    {
        for(j=0; j<2; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }




    for(i=0; i<t; i++)
    {
        for(j=0; j<1; j++)
        {
            cout<<a[i][1]-a[i][0]<<"\n";
        }

    }





}
