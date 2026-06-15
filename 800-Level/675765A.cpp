#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007
const int inf = 9e18;
const int N = 5e3+10;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s="impostor";
    int count=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' )
        {
            count++;
        }
    }
    cout<<count<<endl;
}
