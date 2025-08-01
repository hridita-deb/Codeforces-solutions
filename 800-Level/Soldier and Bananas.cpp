#include<iostream>
using namespace std;
int main()
{

    int k,n,w,cost=0;
    cin>>k>>n>>w;
    cout<<k<<" "<<n<<" "<<w<<endl;

    for(int i=1; i<=w; i++)
    {
        cost=cost+k*i;
    }
    cout<<cost<<endl;;

    if(cost<=n)
    {
        cout<<"0";
    }

    else
    {
        cout<<cost-n;
    }


}
