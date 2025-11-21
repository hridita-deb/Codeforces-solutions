#include<bits/stdc++.h>
using namespace std;

int check_substring(string main,string sub)
{

    for(int i=0; i+sub.size()<=main.size(); i++)
    {
        if( main.substr(i,sub.size()) == sub)
        {
            return 1;
        }
    }
    return 0;

}



int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int main_length, sub_length;
        cin>>main_length>>sub_length;

        string main,sub;
        cin>>main>>sub;


        string main1=main+main;
        string main2=main1+ main1;
        string main3= main2+ main2;
        string main4= main3+ main3;
        string main5= main4+ main4;


        int ans=-1;

        if( check_substring( main,sub) )
        {
            ans=0;
        }
        else     if( check_substring( main1,sub) )
        {
            ans=1;
        }
        else if( check_substring( main2,sub) )
        {
            ans=2;
        }
        else if( check_substring( main3,sub) )
        {
            ans=3;
        }
        else if ( check_substring( main4,sub) )
        {
            ans=4;
        }
        else if ( check_substring(main5,sub) )
        {
            ans=5;
        }


        cout<<ans<<endl;
    }
}
