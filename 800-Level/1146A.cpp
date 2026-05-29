#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;

    int count_a=0,count_else=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='a')
        {
            count_a++;
        }
        else
        {
            count_else++;
        }
    }

cout<<count_a<<endl<<count_else<<endl;
//int diff=count_else-count_a;
    if(count_a<count_else)
    {
        cout<<count_a+1;
    }
  /*  else if(count_a==count_else)
    {
        cout<<s.size()-1;
    }*/
    else
    {
        cout<<s.size()<<endl;
    }
}
