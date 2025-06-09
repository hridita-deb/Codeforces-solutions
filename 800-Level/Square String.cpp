#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        string s;
        cin>>s;

        int mid=s.size()/2;

        string firstHalf="";
        string secondHalf="";

        if(s.size()%2!=0)
        {
            cout<<"NO"<<endl;
        }

        else
        {

            for(int i=0; i<mid; i++)
            {
                firstHalf=firstHalf+s[i];
            }

            for(int i=mid; i<s.size(); i++)
            {
                secondHalf=secondHalf+s[i];
            }


            if(firstHalf==secondHalf)
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
















}
