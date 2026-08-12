/*

same value diff index a thakte pare
array er value->key
array er index->value;
index tahole vector hobe karon same value can be in different index

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    map<int,vector<int>>mp;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        mp[v[i]].push_back(i);  //4 3 1 1 2      mp[4]=0,  mp[3]=1,  mp[1]=2,  mp[1]=3,  mp[2]=4  //map key wise sorted
        //tai erokom vbe store hbe :  1-> {2,3} ,   2-> {4} ,   3-> {1}  ,   4-> {0}

    }

    vector<int>indx;
    int sum=0;
    for(auto it:mp)
    {
        for(auto itt:it.second)
        {
            if(sum+it.first<=k)
            {
                sum=sum+it.first;
                indx.push_back(itt);
            }
            else
            {
                break;
            }
        }
    }

    cout<<indx.size()<<endl;
    for(auto it:indx)
    {
        cout<<it+1<< " ";
    }
    cout<<endl;
}
