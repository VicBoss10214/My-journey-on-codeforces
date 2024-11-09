#include <iostream>
using namespace std;
int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    int ss=0,tt=0;
    for(int i=0;i<s.size();i++)
    {
        ss+=s[i];
        tt+=t[i];
    }
    if(ss==tt)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
