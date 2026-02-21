#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;


    int mid=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='^')
        {
            mid=i;
            break;
        }
    }


    long long sum=0;
    for(int i=0; i<s.size(); i++)
    {
        if(isdigit(s[i]))
        {
            int m=s[i]-'0';
            sum=sum+m*(i-mid);
        }
    }


    if(sum<0)
    {
        cout<<"left"<<endl;
    }
    else if(sum>0)
    {
        cout<<"right"<<endl;
    }
    else
    {
        cout<<"balance"<<endl;
    }
}
