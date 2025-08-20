#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    vector<int>v(n);
    int even=0, odd=0, positive=0,  negative=0;


    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]%2==0)
        {
            even++;
        }
        if(v[i]%2!=0)
        {
            odd++;
        }
        if(v[i]>0)
        {
            positive++;
        }
        if(v[i]<0)
        {
            negative++;
        }
    }

    cout<<"Even:  "<<even<<endl<<"Odd:  "<<odd<<endl<<"Positive:  "<<positive<<endl<<"Negative:  "<<negative<<endl;
}








