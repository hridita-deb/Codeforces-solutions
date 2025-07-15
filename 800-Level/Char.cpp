#include<bits/stdc++.h>
using namespace std;
int main()
{

    char ch;
    cin>>ch;


    if (ch >= 'a' && ch <= 'z')
    {
        cout << (char)(ch - 32) << endl;
    }

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << (char)(ch + 32) << endl;
    }
}
