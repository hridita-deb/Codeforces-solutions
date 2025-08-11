#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,c=0;
    cin>>n>>m;
    char a[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }

    /*for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }*/


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {

            if(a[i][j]=='C' || a[i][j]=='M' || a[i][j]=='Y')
            {

                c=1;
            }
        }

    }


//cout<<a[0][1];
//cout<<a[1][0];




    if(c==1)
    {
        cout<<"#Color"<<endl;

    }
    else
    {
        cout<<"#Black&White"<<endl;

    }


}

