#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;
    int sum=0;
    for(int i=0; i<s.size(); i++)
    {
        int num=s[i]-'0';
        sum=sum+num;
    }

    cout<<sum<<endl;
}
