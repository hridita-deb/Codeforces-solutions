#include<bits/stdc++.h>
using namespace std;
int main ()
{

    long long a,b;
    cin>>a>>b;

    int n=min(a,b);

    long long fact_n=1;
    for(int i=1; i<=n; i++)
    {
        fact_n=fact_n*i;
    }

    cout<<fact_n<<endl;
}



