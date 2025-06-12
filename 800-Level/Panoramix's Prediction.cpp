#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m;
    cin>>n>>m;

    int n_index=0,m_index=0;

    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

    for(int i=0; i<primes.size(); i++)
    {
        if(primes[i]==n)
        {
            n_index=i;
        }
        if(primes[i]==m)
        {
            m_index=i;
        }

    }

    if(m_index-n_index==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
