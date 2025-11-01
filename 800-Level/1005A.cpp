#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> v(n);
    vector<int>a;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }


    int count=1;
    for (int i = 1; i <n; i++)
    {
        if(v[i]==1)
        {
            count++;
            a.push_back(v[i-1]);
        }
    }
    a.push_back(v[n-1]);


    cout<<a.size()<<endl;
    for(auto it:a)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}
