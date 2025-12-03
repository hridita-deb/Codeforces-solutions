#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector < long long > v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());


        long long sum=0;
        for (int i = 0; i < n-1; i++)
        {
            sum=sum+v[i];
        }
        double avg=(double)sum/(n-1);


        cout<<fixed<<setprecision(9)<<v[n-1]+avg<<endl;
    }
}
