#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        //Work korbena as n onek boro

        /*      long long n=1e18; //etotuku porjonto (1 thk shuru kore 10^18 obdhi) kara kara prime check korbo

              vector<bool>prime(n,true); //prothome shobai kei  (1 thk shuru kore 10^18 obdhi) prime dhore nicchi
              prime[0]=prime[1]=false;     //0 & 1 prime na, tai false korlam
              for(int i=2; i<n; i++)
              {
                  if(prime[i]==true)
                  {
                      for(int j=2*i; j<n; j=j+i)
                      {
                          prime[j]=false;
                      }
                  }
              }

              long long left,right;
              cin>>left>>right;
              long long count=0;
              for(int i=left; i<=right; i++)
              {
                  if(prime[i])
                  {
                      count++;
                  }

              }
              cout<<count-4<<endl;*/

        long long left,right;
        cin>>left>>right;
        long long ans=right-left+1;
        long long count=0;

        count=count+((right/2) - (left-1)/2); //2 diye jader vag jai taderke count korchi
        count=count+((right/3) - (left-1)/3); //3 diye jader vag jai taderke count korchi
        count=count+((right/5) - (left-1)/5); //5 diye jader vag jai taderke count korchi
        count=count+((right/7) - (left-1)/7); //7 diye jader vag jai taderke count korchi


//ekhon 2 ta sonkhar overlap baad dite hobe...karon 6, 2 & 3 both diyei vaag jai...so 2 bar count hocche
//Divisible by a& b= divisible by lcm(a,b)

        //lcm(2,3)=6
        count=count-((right/6) - (left-1)/6);
        //lcm(2,5)=10
        count=count-((right/10) - (left-1)/10);
        //lcm(2,7)=14
        count=count-((right/14) - (left-1)/14);
        //lcm(3,5)=15
        count=count-((right/15) - (left-1)/15);
        //lcm(3,7)=21
        count=count-((right/21) - (left-1)/21);
        //lcm(5,7)=35
        count=count-((right/35) - (left-1)/35);

        //Ebar amra beshi subtract kore felchi karon number 30, 6,10,15 3 ti sonkha diyei vaag jai..

        //lcm(2,3,5)=30
        count=count+((right/30) - (left-1)/30);
        //lcm(2,3,7)=42
        count=count+((right/42) - (left-1)/42);
        //lcm(2,5,7)=70
        count=count+((right/70) - (left-1)/70);
        //lcm(3,5,7)=105
        count=count+((right/105) - (left-1)/105);


        //lcm(2,3,5,7)=210
        count=count-((right/210) - (left-1)/210);

//ey pattern a amra prottekta number ekbar korei count korchi

        cout<<ans-count<<endl;









    }
}
