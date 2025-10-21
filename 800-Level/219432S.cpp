#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x,y;
        cin >>x>> y;

        int sum=0;

        int p=min(x,y);
        int n=max(x,y);

        for(int i=p+1; i<n; i++)
        {

            if(i%2==1)
            {
                sum=sum+i;
            }
        }

        cout<<sum<<endl;
    }
}
