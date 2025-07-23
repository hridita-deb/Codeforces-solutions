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

        vector<int>num;
        for(int i=0; i<s.size(); i++)
        {
            num.push_back(s[i]-'0');
        }


        int min=num[0];
        for(int i=1; i<num.size(); i++)
        {
            if(num[i]<min)
            {
                min=num[i];
            }
        }

        cout<<min<<endl;

    }
}

















