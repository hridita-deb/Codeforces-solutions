#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        string s;
        cin>>s;
        int length=0;

        if(s[0]==s[n-1])
        {
            cout<<"Length="<<n<<endl;
        }
        else
        {
            int i=0, j=n-1;
            while(i<j && s[i]!=s[j])
            {
                i++;
                j--;
            }
            cout<<"Length="<<j-i+1<<endl;
        }

    }

}
