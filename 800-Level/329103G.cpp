#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;

        int odd=0,even=0;
        vector < int > v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(n%2!=0)
        {
            cout<<-1<<endl;
        }
        else
        {
            int a=n/2;
            cout<<abs(a-even)<<endl;

        }

    }


}
