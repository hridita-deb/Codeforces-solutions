#include<bits/stdc++.h>
using namespace std;
int main(){

int a,b,c;
cin>>a>>b>>c;
int w=a+b+c;
int x=(a+b)*c;
int y=a*(b+c);
int z=a*b*c;

int maximum=max({w,x,y,z});
cout<<maximum<<endl;

}
