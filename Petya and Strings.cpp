#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum1=0,sum2=0,s;
    string arr,arr2;
    cin>>arr>>arr2;
    transform(arr.begin(), arr.end(), arr.begin(), ::tolower);
    transform(arr2.begin(), arr2.end(), arr2.begin(), ::tolower);
    if(arr<arr2)
        cout<<"-1"<<endl;
    if(arr>arr2)
        cout<<"1"<<endl;
    if(arr==arr2)
        cout<<"0"<<endl;

    return 0;
}
