#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while(t--)
    {

        int r,c;
        cin>>r>>c;

        int min_r=r,max_r=-1,min_c=c,max_c=-1;

        for(int i=0; i<r; i++)
        {
            string s;
            cin>>s;

            for(int j=0; j<c; j++)
            {
                if(s[j]=='#')
                {
                    min_r=min(min_r,i);
                    max_r=max(max_r,i);
                    min_c=min(min_c,j);
                    max_c=max(max_c,j);
                }
            }
        }

cout<<((min_r+max_r)/2)+1<<" "<<((min_c+max_c)/2)+1<<endl;

    }
}
