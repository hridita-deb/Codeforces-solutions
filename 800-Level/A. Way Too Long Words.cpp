#include<iostream>
using namespace std;
int main()
{
    int n,i=0;
    cout<<"Enter how many words you want to input :-";
    cin>>n;

    if(n<=100 && n>=1)
    {
        string array[n];
        cout<<"Enter words :-";
        for(i=0; i<n; i++)
        {
            cin>>array[i];
        }
        cout<<"All words :-"<<endl;
        for(i=0; i<n; i++)
        {
            cout<<array[i]<<endl;
        }


//Check the word length
        for(i=0; i<n; i++)
        {
            if(array[i].length()>100)
            {
                cout<<"Input error";
            }

            else if(array[i].length()<=10)
            {
                cout<<array[i]<<endl;
            }

            else
            {
                char firstLetter=array[i][0];
                char lastLetter=array[i][array[i].length()-1];
                int numBetween=array[i].length()-2;

                cout<<firstLetter<<numBetween<<lastLetter<<endl;
            }
        }
    }
    else
    {
        cout<<"Input error";
    }
}







