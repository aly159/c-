#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s1;
    string s;
    cin>>s;
    for (int i=0; i<s.size(); i++)
        s1.insert(s[i]);
    int x=s1.size();
    if(x %2 ==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}
