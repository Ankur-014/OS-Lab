#include <bits/stdc++.h>
using lli=long long int;
using namespace std;

int main()
{
    lli need[100][100]={0};
    lli available[100]={0};
    lli allocated[100][100]={0};
    cout<<"Enter the need for p0,p1,p2,p3:"<<endl;
    for (lli i=0;i<4;i++)
    {
        for(lli j=0;j<5;j++)
        {
            cin>>need[i][j];
        }
    }
    cout<<"Enter the Available for A,B,C,D,E:"<<endl;
    for(lli i=0;i<5;i++)
    {
        cin>>available[i];
    }
    cout<<"Enter the allocated for p0,p1,p2,p3:"<<endl;
     for (lli i=0;i<4;i++)
    {
        for(lli j=0;j<5;j++)
        {
            cin>>allocated[i][j];
        }
    }
    lli indicator=0;

    while(1){
        indicator=0;
        for(lli i=0;i<4;i++)
        {
            lli check=0;
            for(lli j=0;j<5;j++)
            {
                if(available[j]-need[i][j]<0)
                {
                    cout<<"p"<<i<<" will not run "<<endl;
                    check=1;
                    indicator=1;
                    break;
                }

            }
            if(check==0)
            {
                cout<<"p"<<i<<" will run "<<endl;
                for(lli j=0;j<5;j++)
                {
                    available[j]+=allocated[i][j];
                    allocated[i][j]=0;
                }
            }
        }
        if(indicator==0)
            break;
            cout<<endl;
    }
        cout<<"Now available : "<<endl;
        for(lli j=0;j<5;j++)
        {
            cout<<available[j]<<" ";
        }
        cout<<endl;
        cout<<"Enter number of input process : "<<endl;
        lli np;
        cin>>np;
        cout<<"Enter needed resource :"<<endl;
        for(lli i=0;i<np;i++)
        {
            for(lli j=0;j<5;j++)
            {
                cin>>need[i][j];
            }

        }

        for(lli i=0;i<np;i++)
        {
            lli check=0;
            for(lli j=0;j<5;j++)
            {
                if(available[j]-need[i][j]<0)
                {
                    cout<<"p"<<i<<" will not run "<<endl;
                    check=1;
                    indicator=1;
                    break;
                }

            }
            if(check==0)
            {
                cout<<"p"<<i<<" will run "<<endl;
                for(lli j=0;j<5;j++)
                {
                    available[j]+=allocated[i][j];
                    allocated[i][j]=0;
                }
            }
        }

        cout<<"Now available : "<<endl;
        for(lli j=0;j<5;j++)
        {
            cout<<available[j]<<" ";
        }







    return 0;
}
