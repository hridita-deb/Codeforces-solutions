#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007
const int inf = 9e18;
const int N = 5e3+10;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,z;
        cin>>n>>x>>y>>z;

        int n1=n;
        int h=0;
        int lines=x+y;
        while(n>0)
        {

            h++;
            n=n-lines;
        }


        int h2=max(1,z);
        int lines2=x*h2;
        n1=n1-lines2;
        while(n1>0)
        {
            h2++;
            n1=n1-(x+y*10);
        }

        cout<<min(h,h2)<<endl;
    }
}
