#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while(t--)
    {

        int a, b, c;
        cin >> a >> b >> c;

        int maximum = max({a, b, c});

        int new_a=0,new_b=0,new_c=0;
        if (a>b && a>c)
        {
            new_a=0;
        }
        else
        {
            new_a=maximum-a+1;
        }

        if (b>c && b>a)
        {
            new_b=0;
        }
        else
        {
            new_b=maximum-b+1;
        }

        if (c>a && c>b)
        {
            new_c=0;
        }
        else
        {
            new_c=maximum-c+1;
        }

        cout<<new_a<<" "<<new_b<<" "<<new_c<<endl;

    }

}
