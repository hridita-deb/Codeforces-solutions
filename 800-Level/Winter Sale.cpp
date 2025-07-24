#include<bits/stdc++.h>
using namespace std;
int main()
{

    float x,p;
    cin>>x>>p;

    float actual_price=p*(100/(100-x));
    cout<<fixed<<setprecision(2)<<actual_price<<endl;

}
