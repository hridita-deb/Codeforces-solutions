#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int step=1;
    for(int i=0; i<n; i=i+step)
    {
        cout<<s[i];
        step++;

    }
}
