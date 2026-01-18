#include <bits/stdc++.h>
using namespace std;

int min_operations(string s, string need)
{

    int operations = 0;
    int checker_index = need.size() - 1; // Start from the last digit of the target ( '5' in "25")
    for (int i = s.size() - 1; i >= 0; i--)
    {

        if (s[i] == need[checker_index])   //যদি need এর ১ম digit খুঁজে পাই, তাহলে ২য় digit এ যাবো checker index-- করে
        {
            checker_index--;
            if (checker_index < 0)              //যদি ২ ও খুঁজে পাই, তাহলে হয়ে যাবে, so break করবো
            {
                break;
            }
        }
        else
        {
            operations++;
        }
    }

    if (checker_index >= 0)
    {
        operations = INT_MAX;
    }

    return operations;
}



int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        vector<string> need = {"00", "25", "50", "75"};

        int ans = INT_MAX;
        for (int i=0; i<need.size(); i++)
        {
            int op=min_operations(s,need[i]);
            ans = min(ans,op);
        }
        cout << ans << endl;
    }



}
