//min theke maximum sum joto hote pare sob gulo niye niye oi nirdishto sum er jnn maximum team nicchi & last a sob rokom sum er jnn final maximum team nicchi


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
        vector < int > w(n);
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        sort(w.begin(), w.end());


        //২টি grp er sum min=2 & max=2*n hote parbe
        int mx_team = 0;
        for (int sum = 2; sum <= 2 * n; sum++)
        {
            int team = 0;
            int l = 0, r = n - 1;
            while (l < r)
            {
                int crnt_sum = w[l] + w[r];
                if (crnt_sum == sum)
                {
                    team++;
                    l++;
                    r--;
                }
                else if (crnt_sum < sum)
                {
                    l++;
                }
                else
                {
                    r--;
                }

            }
            mx_team = max(mx_team, team);
        }


        cout << mx_team << endl;

    }
}
