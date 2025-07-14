#include<bits/stdc++.h>
using namespace std;
int main()
{

    char ch;
    cin>>ch;

    int ascii=ch;

    if(ascii>=48 && ascii<=57)
    {
        cout<<"IS DIGIT"<<endl;
    }


    if(ascii>=65&& ascii<=91)
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }


    if(ascii>=97&& ascii<=123)
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }
}
