#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    vector<long long>indx;
    for (long long i=0; i<s.size(); i++)
    {
        if(s[i]=='.')
        {
            indx.push_back(i);
        }
    }


    int found=0;
    for(int i=1; i<indx.size(); i++)
    {
        if(indx[i]-indx[i-1]>k)
        {
            found=1;
            break;
        }
    }


    if(found==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
