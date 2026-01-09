//Concept :- A number has exactly 3 divisors iff it is the square of a prime number.

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;

    vector<long long>v(n);


    for(int i=0; i<n; i++)
    {
        cin>>v[i];

        long long prime=sqrt(v[i]);
        int count=0;

        if(prime*prime!=v[i])
        {
            cout<<"NO"<<endl;
        }

        else
        {
            for(int j=1; j*j<=prime; j++)
            {
                if(prime%j==0)
                {
                    count++;
                    if(prime/j!=j)
                    {
                        count++;
                    }
                }
            }


            if(count==2)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }


    }
}
