#include <iostream>
using namespace std;
int main()
{
	int n,k,count=0,i=0;
	cin>>n>>k;

	int score[n];
	for( i=0; i<n; i++) {
		cin>>score[i];
	}

	for(i=0; i<n; i++) {

		if(score[i]>0 && score[k-1]<=score[i]) {
			count++;
		}
	}
	cout<<count;
}
