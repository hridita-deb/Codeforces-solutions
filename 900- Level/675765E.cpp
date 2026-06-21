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

        unordered_map<int,int>seen;
        seen[0]=-1;

        int current_sum=0;
        int max_len=0;


        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                current_sum++;
            }
            else
            {
                current_sum--;
            }

            if(seen.count(current_sum))
            {
                max_len=max(max_len,i-seen[current_sum]);
            }
            else
            {
                seen[current_sum]=i;
            }
        }
        cout<<max_len<<endl;




    }


}
