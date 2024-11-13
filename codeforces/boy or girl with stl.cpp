#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    set<char> ch;
    for(int i=0;i<s.size();i++)
    {
        ch.insert(s[i]);
    }
    int size =ch.size();
    if(size%2)
    {
        cout<<"IGNORE HIM!";
    }
    else
    {
        cout<<"CHAT WITH HER!";
    }
    return 0;

}
