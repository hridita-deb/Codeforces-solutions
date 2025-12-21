#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int a=v[0];
    v.push_back(a);
  /*  for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;*/


    int minDiff=INT_MAX;

    int diff, in1, in2;
    for(int i=1; i<v.size(); i++)
    {
        diff=abs(v[i]-v[i-1]);
        if(diff<minDiff)
        {
            minDiff=diff;
            in1=i+1;
            in2=i;

        }
    }

    if(in1>n)
    {
        cout<<in2<<" "<<1<<endl;
    }
    else
    {
        cout<<in1<<" "<<in2<<endl;
    }
}
