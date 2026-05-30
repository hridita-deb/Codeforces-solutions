#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;



        int pref2 = 0;
        int suf = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1' || s[i] == '3')
            {
                suf++;
            }
        }

        int ans = pref2 + suf;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '2')
            {
                pref2++;
            }
            if (s[i] == '1' || s[i] == '3')
            {
                suf--;
            }
            ans = max(ans, pref2 + suf);
        }

        cout << s.size() - ans << endl;
    }


}
