#include <iostream>

using namespace std;


int main()
{
    int r,p;
    cout << "Enter the no. of processes" << endl;
    cin>>p;
    cout << "Enter the no. of resources" << endl;
    cin>>r;

    int allocated[p][r];
    int requested[p][r];
    int output[p][p];
    for(int i=0;i<p;i++){
        for(int j=0;j<p;j++){
            output[i][j]=0;
        }
    }
    ///Allocated Matrix
    cout<<"Enter the allocated matrix: "<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<r;j++){
            cin>>allocated[i][j];
        }
    }
    /*
    0 0 1 0 0 1
    0 1 0 0 0 0
    0 0 0 0 1 0
    0 0 0 1 0 0
    1 0 0 0 0 0

    */
    cout<<"Enter the requested matrix: "<<endl;
    ///Requested Matrix
    for(int i=0;i<p;i++){
        for(int j=0;j<r;j++){
            cin>>requested[i][j];
        }
    }

    /*
    0 0 0 0 0 0
    0 0 0 0 0 1
    1 0 0 1 0 0
    0 0 0 0 1 1
    0 1 0 1 0 0

    */
    for(int i=0;i<p;i++){
        for(int j=0;j<r;j++){
            if(allocated[i][j]==1)
            {
                for(int k=0;k<p;k++){
                    if(requested[k][j]==1){
                        output[k][i]=1;
                        cout<<k<<" depends on "<<i<<endl;
                    }

                }
            }
        }
    }
    /*cout<<"Output: "<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<p;j++){
            cout<<output[i][j]<<" ";
        }
        cout<<endl;
    }
    */
    return 0;
}
