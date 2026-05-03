#include <bits/stdc++.h>
using namespace std;
int main()
{

        int n;
        cin>>n;


        int sum=0;
        int crime=0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            if(x==-1)
            {
                if(sum>0)
                {
                    sum--;
                }
                else
                {
                    crime++;
                }
            }
            else
            {
                sum=sum+x;
            }
        }

        cout<<crime<<endl;
    }

