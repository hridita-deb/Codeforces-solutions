#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>index;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='B')
            {
                index.push_back(i);
            }
        }

        int maxIndex=index[0],minIndex=index[0];
        for(int i=0; i<index.size(); i++)
        {
            if (index[i]>maxIndex)
            {
                maxIndex=index[i];
            }
            if (index[i]<minIndex)
            {
                minIndex=index[i];
            }
        }
cout<<(maxIndex-minIndex)+1<<endl;
    }









}
