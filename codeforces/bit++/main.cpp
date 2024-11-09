#include <iostream>

using namespace std;

int main()
{
    int n,val;
    val=0;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        if(s=="X++")
        {
            val++;
        }
        if(s=="++X")
        {
            val++;
        }
        if(s=="X--")
        {
            val--;
        }
        if(s=="--X")
        {
            val--;
        }
    }
     cout<<val;
    return 0;
}
