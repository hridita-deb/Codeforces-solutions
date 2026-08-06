#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int i=1;
    int ans=0;
    while(sum<=n)
    {
        int a=((i*(i+1))/2);
        sum=sum+a;
        if(sum<=n)
        {
            ans++;
        }
        i++;
    }
    cout<<ans<<endl;
}
