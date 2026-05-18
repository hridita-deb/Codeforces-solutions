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
        vector<int>v(n);

        int two=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]==2)
            {
                two++;
            }
        }


        if(two%2==1)
        {
            cout<<-1<<endl;
            continue;
        }
        if(two==0)
        {
            cout<<1<<endl;
            continue;
        }

        int need=two/2;
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]==2)
            {
                count++;

                if(count==need)
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }





    }
}
