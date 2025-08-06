#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;


    vector<string>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());


    int q;
    cin>>q;
    int found;
    while(q--)
    {
        string x;
        cin>>x;

        int left=0,right=n-1;
        int found=0;

        while(left<=right)
        {

            int mid=(left+right)/2;

            if(v[mid]==x)
            {
                found=1;
                break;
            }
            else if(v[mid]>x)
            {
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }
        }


        if(found==1)
        {
            cout<<"Deja Vu!"<<endl;
        }
        else
        {
            cout<<"Best wishes for your first contest!"<<endl;
        }
    }
}























