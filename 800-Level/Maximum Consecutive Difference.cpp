#include<iostream>
using namespace std;
int main()
{

int t,n,i=0,j=0,maxDiff=0,maxi=0;
cin>>t;

for(j=0;j<t;j++){
cin>>n;

int array[n];
for(i=0; i<n; i++)  {
    cin>>array[i];

}

maxi=0;

for(i=0; i<n-1; i++)  {

maxDiff=abs(array[i]-array[i+1]);


if(maxi<maxDiff){
    maxi=maxDiff;
}
}

cout<<maxi<<endl;
}

}

