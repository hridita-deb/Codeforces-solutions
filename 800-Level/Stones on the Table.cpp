#include<iostream>
using namespace std;
int main(){

int n,sameColor=0;
cin>>n;
cout<<n;
char color[n];
for(int i=0;i<n;i++){
 cin>>color[i];
cout<<color[i]<<endl;

}

for(int i=0;i<n;i++){

    if(color[i]==color[i+1]){
        sameColor++;
    }

}

cout<<sameColor;



}
