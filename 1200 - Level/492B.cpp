//Concept : একটা লাইট বাম ও ডান দিকে আলোকিত করবে। তাই দুইটি লাইটের মধ্যে সর্বোচ্চ দূরত্বের অর্ধেক নেওয়া হবে।
//আর স্ট্রিটের প্রথম এবং শেষ পয়েন্টে লাইট থাকতে পারে বা নাও থাকতে পারে। তাই আমাদের 0 থেকে প্রথম ল্যান্টার পর্যন্ত দূরত্ব এবং শেষ ল্যান্টার থেকে L পর্যন্ত দূরত্ব ও বিবেচনা করতে হবে।
//এই ৩টির maximum হবে answer।

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,l;
    cin>>n>>l;

    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    double zeroT0first=v[0]-0;
    double lastTOlength=l- v[n-1];

    int diff=0;
    for(int i=1; i<n; i++)
    {
        if(v[i]-v[i-1]>diff)
        {
            diff=v[i]-v[i-1];
        }
    }

    double avg=diff/(double)2;
    double ans=max( avg,max(zeroT0first,lastTOlength));


    cout<<fixed<<setprecision(10)<<ans<<endl;
}
