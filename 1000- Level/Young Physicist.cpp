#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int sumA=0,sumB=0,sumC=0;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        sumA=sumA+a;
        sumB=sumB+b;
        sumC=sumC+c;
    }
    // cout<<sumA<<sumB<<sumC;
    if(sumA==0 && sumB==0 && sumC==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}

