#include <iostream>

using namespace std;

int main()
{
    int x;
    int counter=0;
    cin>>x;
    while (x>=1)
        {
        bool a,b,c;
        cin>>a>>b>>c;
        if(a==1 && b==1 && c==1 || a==1 && b==1 && c==0 || a==1 && b==0 && c==1 || a==0 && b==1 && c==1)
        {
            counter++;
        }
        x--;
        }
    cout<<counter<<endl;
    return 0;
}
