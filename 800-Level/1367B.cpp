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
        vector<int> v(n);

        int count_even=0,count_odd=0;


        for(int i = 0; i < n; i++)
        {
            cin >> v[i];

            if( i%2==0 && v[i]%2!=0)
            {
                count_even++;
            }
            else if( i%2==1 && v[i]%2==0)
            {
                count_odd++;
            }

        }

        if(count_even==count_odd)
        {
            cout<<count_even<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
