#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n,m,a;
    cin>>n>>m>>a;

    long long res=ceil(n/(double)a)*ceil(m/(double)a);

    cout<<res<<endl;
}
