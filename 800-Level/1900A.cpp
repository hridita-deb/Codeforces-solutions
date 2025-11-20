#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        string s;
        cin>>s;


        int total_dots=0,dots=0;
        int found=0;


        for(int i=0; i<n; i++)
        {
            if(s[i]=='.')
            {
                total_dots++;
                dots++;

                if(dots>=3)
                {
                    found=1;
                }
            }
            else
            {
                dots=0;
            }
        }


        if(found==1)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<total_dots<<endl;
        }


    }
}
