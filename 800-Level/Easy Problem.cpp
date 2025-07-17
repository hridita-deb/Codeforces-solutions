#include<iostream>
using namespace std;
int main()
{

    int t,n,i=0;
    cin>>t;

    if(t>=1 && t<=99)
    {
        int array[t];
        for(i=0; i<t; i++)
        {

            cin>>array[i];
        }

        for(i=0; i<t; i++)
        {

            if(array[i]>=2 && array[i]<=100)
            {
                int count=0;
                for(int b=1; b<array[i]; b++)
                {

                    count++;
                }
                cout<<count<<endl;
            }

        }


    }

    else
    {
        cout<<"Error"<<endl;
    }

}

