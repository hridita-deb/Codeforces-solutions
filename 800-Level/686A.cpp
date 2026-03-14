#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n,x;
    cin>>n>>x;
    int notgiven=0;
    for(int i=0; i<n; i++)
    {
        char c;
        long long num;
        cin>>c>>num;

        if(c=='+')
        {
            x=x+num;
        }
        else
        {
            if(x>=num)
            {
                x=x-num;
            }
            else
            {
                notgiven++;
            }
        }

    }
    cout<<x<<" "<<notgiven<<endl;
}
