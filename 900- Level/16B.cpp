#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int>p1,pair<int,int>p2)
{
    return p1.second>p2.second;
}

int main()
{

    int n,m;
    cin>>n>>m;
    pair<int,int>p[m];

    for(int i=0; i<m; i++)
    {
        cin>>p[i].first>>p[i].second;
    }

    sort(p,p+m,compare);

    int total=0;
    for(int i=0; i<m; i++)
    {

        int take=min(n,p[i].first);
        total=total+(take*p[i].second);

        n=n-take;
        if(n==0)
        {
            break;
        }

    }

    cout<<total<<endl;



}
