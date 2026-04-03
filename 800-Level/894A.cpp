#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;
    int totalQ = 0;
    for (auto it: s)
    {
        if (it == 'Q')
        {
            totalQ++;
        }
    }

    int leftQ = 0, rightQ = 0;
    int ans = 0;


    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'Q')
        {
            leftQ++;
        }
        else if (s[i] == 'A')
        {
            rightQ = totalQ - leftQ;
            ans = ans + (leftQ * rightQ);

        }
    }
    cout << ans << endl;

}