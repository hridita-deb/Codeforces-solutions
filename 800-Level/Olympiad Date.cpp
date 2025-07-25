#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int zero=3,one=1,two=2,three=1,five=1;
        int count_zero=0,count_one=0, count_two=0, count_three=0, count_five=0;

        int min_index=0;

        for (int i = 0; i < n; i++)
        {
            if(v[i]==0)
            {
                count_zero++;
            }
            if(v[i]==1)
            {
                count_one++;
            }
            if(v[i]==2)
            {
                count_two++;
            }
            if(v[i]==3)
            {
                count_three++;
            }
            if(v[i]==5)
            {
                count_five++;
            }


            if(count_zero>=zero && count_one>=one && count_two>=two && count_three>=three && count_five>=five  )
            {
                min_index=i+1;
                break;
            }

        }
        cout<<min_index<<endl;

    }
}
