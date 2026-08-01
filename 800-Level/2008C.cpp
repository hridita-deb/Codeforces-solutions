#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long  long l,r;
        cin>>l>>r;

        long long diff=r-l;
        long long n=1;
        while((n*(n+1))/2  <= diff )
        {
            n++;
        }

        cout<<n<<endl;
    }
}
