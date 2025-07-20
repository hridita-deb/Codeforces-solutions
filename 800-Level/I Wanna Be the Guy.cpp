#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n;
    cin>>n;

    int p;
    cin>>p;
    vector<int>x(p);
    for(int i=0; i<p; i++)
    {
        cin>>x[i];
    }

    int q;
    cin>>q;
    vector<int>y(q);
    for(int i=0; i<q; i++)
    {
        cin>>y[i];
    }

    vector<int>merged=x;
    merged.insert(merged.end(),y.begin(),y.end());

    int match=0;
    int unmatch=0;


    for(int i=1; i<=n; i++)
    {
        int found=0;
        for(int j=0; j<merged.size(); j++)
        {
            if(i==merged[j])
            {
                found=1;
                break;
            }
        }

        if(found==0)
        {
            unmatch++;
        }
    }

    if(unmatch==0)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
}
