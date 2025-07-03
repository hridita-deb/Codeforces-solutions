#include<iostream>
#include<cstring>
using namespace std;
int main()
{

    char userName [1000];
    cin>>userName;
    cout<<userName<<endl;
    cout<<strlen(userName)<<endl;
    int i=0,j=0,count=0;

    for(i=0; i<strlen(userName); i++)
    {
        int isSame=0;
        for(j=0; j<i; j++)
        {
            if(userName [i]==userName [j])
            {
                isSame++;
                break;
            }
        }
        if(isSame==0)
        {
            count++;
        }
    }
    cout<<count<<endl;
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
}

