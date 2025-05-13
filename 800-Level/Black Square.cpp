#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    int sum=0;
    for(int i=0; i<s.size(); i++)
    {

        int num=s[i] -'0';
        if(num==1)
        {
            sum=sum+a;
        }
        else if(num==2)
        {
            sum=sum+b;
        }
        else if(num==3)
        {
            sum=sum+c;
        }
        else
        {
            sum=sum+d;
        }
    }
cout<<sum<<endl;

}
