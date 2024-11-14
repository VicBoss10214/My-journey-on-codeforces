#include <bits/stdc++.h>
//Time limit exceeds in this code....but I used substring finder for the 1st time here :)
using namespace std;
int main()
{
    string s;
    string sub="1100";
    int i,v,t,q;
    cin>>t;
    while(t--)
    {
        cin>>s;
        cin>>q;
        while(q--)
        {
            cin>>i>>v;
            s[i-1]=(char)(v+48);
            int res=s.find(sub);
            if(res==string::npos)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}
