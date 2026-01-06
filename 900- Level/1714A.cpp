#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,H,M;
        cin>>n>>H>>M;

        int need=H*60+M;
        int sleep=24*60;


        while(n--)
        {

            int h,m;
            cin>>h>>m;

            int alarm=h*60+m;
            int diff=alarm-need;

            if(diff<0)
            {
                diff=(24*60)+diff;

            }

            if(diff<sleep)
            {
                sleep=diff;
            }
        }

        cout<<sleep/60<<" "<<sleep%60<<endl;

    }
}
