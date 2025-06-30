#include<iostream>
using namespace std;
int main()
{

    int a[5][5],i=0,j=0,x=0,y=0;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>a[i][j];
        }
    }



    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(a[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    }
  cout<<abs(x-2)+abs(y-2);

}
