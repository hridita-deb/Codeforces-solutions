#include<bits/stdc++.h>
using namespace std;
int main()
{

    int c1,c2,c3;
    cin>>c1>>c2>>c3;
    int m1,m2,m3;
    cin>>m1>>m2>>m3;
    int  n;
    cin>>n;

    int sum_C= c1+c2+c3;
    int sum_M= m1+m2+m3;

    int C=ceil(sum_C/5.0);
    int M=ceil(sum_M/10.0);

    if(C+M<=n)
    {

        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


}
