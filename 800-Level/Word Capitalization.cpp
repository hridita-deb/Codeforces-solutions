#include<iostream>
using namespace std;
int main()
{

    char word[1000];
    cin>>word;
    cout<<word<<endl;
    cout<<word[0]<<endl;
    if(word[0]>=97 && word[0]<=122 )
    {
        word[0]=word[0]-32;
        cout<<word;


    }
    else
    {
        cout<<word;
    }






}
