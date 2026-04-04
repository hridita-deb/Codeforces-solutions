// Idea : zehetu ami ekbari shorate parbo, tai ami sobgulor 1st min element ke emon ekti array te pathabo jar 2nd element sob array er 2nd elemnet er cheye choto

/*
   5     7    1001  1007 -> Dumping array
   6     8     11
   2     9

   ans= (7+8+9)+2-7 = 19
   ans=(sum of 2nd elements)+lowest 1st element - lowest 2nd element */

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;    //koita array

        vector<long long>scnd_elmnt;
        long long lowest_1st_elmnt=INT_MAX;
        while(n--)
        {
            int m;  //size
            cin>>m;
            vector<long long>v(m);
            for(int i=0; i<m; i++)
            {
                cin>>v[i];
            }

            sort(v.begin(),v.end());
            scnd_elmnt.push_back(v[1]);
            lowest_1st_elmnt=min(lowest_1st_elmnt,v[0]);
        }

        long long lowest_2nd_elmnt=*min_element(scnd_elmnt.begin(),scnd_elmnt.end());


        long long sum_2nd_elmnt=0;
        for(int i=0; i<scnd_elmnt.size(); i++)
        {
            sum_2nd_elmnt=sum_2nd_elmnt+scnd_elmnt[i];
        }

        long long ans=    sum_2nd_elmnt+lowest_1st_elmnt- lowest_2nd_elmnt;
        cout<<ans<<endl;

    }
}
