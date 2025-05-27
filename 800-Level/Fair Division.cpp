/*#include<iostream>
using namespace std;
int main()
{
    int t,i,j,sum=0;

    cin>>t;
    cout<<t;
    int a[t];
    for(i=0; i<t; i++)
    {
        cin>>a[i];
        int b[a[i]];
        {
            for(j=0; j<a[i]; j++)
            {
                cin>>b[j];
            }
        }
    }
    for(i=0; i<t; i++)
    {
        cout<<a[i];
        int b[a[i]];
        {
            for(j=0; j<a[i]; j++)
            {
                cout<<b[j];
            }
        }
    }

    for(i=0; i<t; i++)
    {
        // cout<<a[i];
        int b[a[i]];
        {
            for(j=0; j<a[i]; j++)
            {
                sum=sum+b[j];
                if(sum%2!=0)
                {
                    cout<<"NO"<<endl;
                }
                else if(sum%2==0 && b[j]==2)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"YES"<<endl;
                }
            }
        }
    }
}*/


/*#include<iostream>
using namespace std;

int main()
{
    int t, i, j;

    cin >> t;

    for(i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int b[n];
        int sum = 0;

        for(j = 0; j < n; j++)
        {
            cin >> b[j];
            sum += b[j];
        }

        if(sum % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            int cnt2 = 0;

            for(j = 0; j < n; j++)
            {
                if(b[j] == 2)
                {
                    cnt2++;
                }
            }

            if(cnt2 % 2 != 0 && cnt2 == n)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}*/


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
        vector<int>v(n);

        int sum=0,one=0,two=0;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum=sum+v[i];
            if(v[i]==1)
            {
                one++;
            }
            else
            {
                two++;
            }
        }


        if(sum%2!=0)
        {
            cout << "NO" << endl;
        }
        else
        {
            if(one==0 && two%2!=0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }


    }

}




























