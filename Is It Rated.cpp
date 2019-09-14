#include <iostream>

using namespace std;

int main()
{
    int x;
    bool change=false,sorted=true;
    cin>>x;
    int arr[x][2];
    for(int i=0;i<x;i++)
        {
        cin>>arr[i][0]>>arr[i][1];
       if(arr[i][0]!=arr[i][1]){
            change = true;
            }
        if(i>0 && arr[i][0]>arr[i-1][0]){
                sorted=false;
        }
        }
        if(change == true )
            cout<<"rated"<<endl;
        else if (change==false && sorted == true)
            cout<<"maybe"<<endl;
        else if (change==false && sorted==false)
            cout<<"unrated"<<endl;
    return 0;
}
