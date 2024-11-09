#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    string s;
    cin>>s;
    int size=s.size();
    char sl[size];
    for(int i=0;i<size;i++)
    {
        sl[i]=tolower(s[i]);
    }
    for(int i=0;i<size;i++)
    {
        if(s[i]!=sl[i])
        {
            count++;
        }
    }
    if(count>(size/2))
    {
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }
    else
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }
    cout<<s;
    return 0;
}
