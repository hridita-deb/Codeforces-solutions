#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    while(n--)
    {
        string s;
        cin>>s;
        if(s=="Tetrahedron" )
        {
            sum=sum+4;
        }
        else if(s=="Cube")
        {
            sum=sum+6;
        }
        else if(s=="Octahedron")
        {
            sum=sum+8;
        }
        else if(s=="Dodecahedron")
        {
            sum=sum+12;
        }
        else
        {
            sum=sum+20;
        }
    }

    cout<<sum;
}
