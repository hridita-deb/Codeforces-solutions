#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;


        for(int i=1; i<=n; i++)
        {

            if(i%2==1)
            {
                cout<<"-1"<<" ";
            }

            else
            {
                if(i==n)
                {
                    cout<<"2";
                }
                else
                {
                    cout<<"3"<<" ";
                }
            }

        }

        cout<<endl;

    }
}
