#include <bits/stdc++.h>
using namespace std;
using lli=long long int;
using d=double;
priority_queue<lli>pq,current_process,tmp_process;
int main()
{
    lli process[100]={-1},arrival[100]={-1},burst[100]={-1},completion[100]={0},pro,size1,brst[100]={-1};
    d turnaround=0,waiting=0;
    lli maximum=0,complete=0,min_b_process,n,indi=0;
    cout<<"Enter the number of process : "<<endl;
    cin>>n;
    for(lli i=0;i<n;i++)
    {
        cout<<"Enter process number,arrival time and burst time of that process :"<<endl;
        cin>>process[i]>>arrival[i]>>burst[i];
        pq.push(-arrival[i]);
        brst[i]=burst[i];
    }
    cout<<endl;
    for(lli i=0;i<n;i++)
    {
        maximum=max(arrival[i],maximum);
    }
    for(lli i=0;i<=maximum;i++)
    {
        if(current_process.empty())
        {
            ++complete;
            indi=1;
        }
        if(pq.empty()==false)
        {
        if((-pq.top())==i)
        {
            for(lli k=0;k<n;k++)
            {
                if((-pq.top())==arrival[k])
                {
                    pro=k;
                    break;
                }
            }
            pq.pop();
            current_process.push(pro);
        }
        lli ttt=current_process.size();
        if(current_process.empty()==false)
        {
            if(indi==1)
            {
                --complete;
                indi=0;
            }
            lli min_b_t=9999;
            for(lli test=0;test<ttt;test++)
            {
                min_b_t=min(min_b_t,burst[current_process.top()]);
                tmp_process.push(current_process.top());
                current_process.pop();
            }
            current_process=tmp_process;
            lli ccc=current_process.size();
            while(tmp_process.empty()==false)
            {
                tmp_process.pop();
            }
            for(lli mn=0;mn<n;mn++)
            {
                if(min_b_t==burst[mn])
                {
                    min_b_process=mn;
                    break;
                }
            }
            burst[min_b_process]--;
            completion[min_b_process]=++complete;
            for(lli test=0;test<ccc;test++)
            {
                if(burst[current_process.top()]>0)
                {
                    tmp_process.push(current_process.top());
                    current_process.pop();
                }
                else
                {
                    current_process.pop();
                }
            }
            current_process=tmp_process;
            lli sss=current_process.size();
            for(lli tp=0;tp<tmp_process.size();tp++)
            {
                tmp_process.pop();
            }
        }

        }
    }
    while(current_process.empty()==false)
    {
         if(current_process.empty()==false)
        {
            lli min_b_t=9999;
            lli ttt=current_process.size();
            for(lli test=0;test<ttt;test++)
            {
                min_b_t=min(min_b_t,burst[current_process.top()]);
                tmp_process.push(current_process.top());
                current_process.pop();
            }
            current_process=tmp_process;
            lli ccc=current_process.size();
            while(tmp_process.empty()==false)
            {
                tmp_process.pop();
            }
            for(lli mn=0;mn<n;mn++)
            {
                if(min_b_t==burst[mn])
                {
                    min_b_process=mn;
                    break;
                }
            }
            burst[min_b_process]--;
            completion[min_b_process]=++complete;
            for(lli test=0;test<ccc;test++)
            {
                if(burst[current_process.top()]>0)
                {
                    tmp_process.push(current_process.top());
                    current_process.pop();
                }
                else
                {
                    current_process.pop();
                }
            }
            current_process=tmp_process;
            lli sss=current_process.size();
            for(lli tp=0;tp<tmp_process.size();tp++)
            {
                tmp_process.pop();
            }
        }
    }
    for(lli kp=0;kp<n;kp++)
    {
        cout<<completion[kp]<<endl;
    }

    for(lli kp=0;kp<n;kp++)
    {
        cout<<"Turnaround time p"<<process[kp]<<" : "<<completion[kp]-arrival[kp]<<endl;
        turnaround+=(completion[kp]-arrival[kp]);
    }
    for(lli kp=0;kp<n;kp++)
    {
        cout<<"Waiting time p"<<process[kp]<<" : "<<completion[kp]-(arrival[kp]+brst[kp])<<endl;
        waiting+=(completion[kp]-(arrival[kp]+brst[kp]));
    }
    cout<<"Average turnaround time : "<<turnaround/n<<endl;
     cout<<"Average waiting time : "<<waiting/n<<endl;
    return 0;
}
