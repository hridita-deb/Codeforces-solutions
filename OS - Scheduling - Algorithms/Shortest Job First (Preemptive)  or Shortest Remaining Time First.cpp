#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cout<<"Enter number of processes: ";
    cin>>n;

    vector<int>at(n);
    for(int i=0; i<n; i++)
    {
        cout<<"Enter arrival time of process "<<i+1<<": ";
        cin>>at[i];
    }

    vector<int>bt(n);
    vector<int>rt(n);
    for(int i=0; i<n; i++)
    {
        cout<<"Enter burst time of process "<<i+1<<": ";
        cin>>bt[i];
        rt[i]=bt[i];
    }

    vector<int>tat(n);
    vector<int>wt(n);

    int time=0,completed_Processes=0;

    int total_tat=0,total_wt=0;

    for(time=0; completed_Processes!=n; time++)
    {

        int selected_Process_index=-1;
//কারন আমি এখনো কোনো Process select করিনি।যেহেতু process এর Index 0 থেকে শুরু,তাই -1 দিয়ে initialize করেছি।অর্থাৎ কোনো process এখনো select হয়নি।

        for(int i=0; i<n; i++)
        {
            if(at[i]<=time && rt[i]>0)
                //এরপর check করবো কোনো process এর at 0 এর সমান কিনা এবং rt 0 থেকে বড় কিনা
            {
                if(selected_Process_index==-1 || rt[i]<rt[selected_Process_index] )
                {
                    selected_Process_index=i;
                }
                //যদি এমন কোনো পাই,তাহলে check করবো ঐ process এর rt আমার select করার process এর rt এর চেয়ে কম কিনা..যদি কম হয় তাহলে selected process এর index update করবো।
            }
        }


        if(selected_Process_index==-1)
        {
            time++;
            continue;
        }
        /*যদি একটাও process না পাই যেটা চালাতে পারবো,
            তখন কাজ না করে শুধু Time increase করবো এবং continue এর কারনে নিচের কোনো line আর execute না হয়ে আবার ১ম থেকে for loop থেকে start হবে।*/

        rt[selected_Process_index]--;
//আর যদি পাওয়া যায় তাহলে ঐ selected process টির remaining time(burst time) কমাবো ১ করে।




        if(rt[selected_Process_index]==0)
        {
            completed_Processes++;
            int ct=time+1;

            tat[selected_Process_index]=ct-at[selected_Process_index];
            wt[selected_Process_index]=tat[selected_Process_index]-bt[selected_Process_index];

            total_tat=total_tat+tat[selected_Process_index];
            total_wt=total_wt+wt[selected_Process_index];

        }

        //কোনো process এর rt শেষ অর্থাৎ 0 হয়ে গেলে complete process increment করবো
    }

    cout << "\nPID\tTAT\tWT\n";
    for (int i = 0; i < n; i++)
    {
        cout << "P" << i + 1 << "\t" << tat[i] << "\t" << wt[i] << "\n";
    }

    cout << "Average Waiting Time: " <<total_wt/n << endl;
    cout << "Average Turnaround Time: " <<total_tat/n<<endl;





}
