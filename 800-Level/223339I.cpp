#include <bits/stdc++.h>
using namespace std;

int countVowels(string s, int i)
{
    if (i == s.length())
        return 0;

    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
            s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
            s[i] == 'O' || s[i] == 'U')
    {
        return 1 + countVowels(s, i + 1);
    }

    else
    {
        return countVowels(s, i + 1);
    }

}

int main()
{
    string S;
    getline(cin, S);

    cout << countVowels(S, 0);

}
