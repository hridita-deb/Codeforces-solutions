#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    vector<int>v(n);


    vector<int>one_index;
    vector<int>two_index;
    vector<int>three_index;


    int one=0,two=0,three=0;


    for(int i=0; i<n; i++)
    {
        cin>>v[i];

        if(v[i]==1)
        {
            one++;
            one_index.push_back(i+1);
        }
        else if(v[i]==2)
        {
            two++;
            two_index.push_back(i+1);
        }
        else
        {
            three++;
            three_index.push_back(i+1);
        }

    }

    int minimum=min(one,min(two,three));
    int team=(3*minimum)/3;

    if(one==0 || two==0 || three==0)
    {
        cout<<"0"<<endl;
    }

    else
    {
        cout<<team<<endl;
        for(int i=0; i<team; i++)
        {
            cout<<one_index[i]<<" "<<two_index[i]<<" "<<three_index[i]<<endl;
        }
    }
}
