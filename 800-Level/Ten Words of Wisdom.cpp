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

        vector<int>length;
        vector<int>quality;
        while(n--)
        {
            int a,b;
            cin>>a>>b;
            length.push_back(a);
            quality.push_back(b);
        }
        int maxQ=-1;

        int index=0;
        for(int i=0; i<length.size(); i++)
        {
            if(length[i]<=10)
            {


                if(maxQ<quality[i])
                {
                    maxQ=quality[i];
                    index=i;
                }



            }
        }

        cout<<index+1<<endl;
    }
}










