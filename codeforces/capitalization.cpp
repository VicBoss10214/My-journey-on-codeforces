#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    char c;
    cin>>s;
    if(s[0]>'Z'){
        c=s[0]-32;
        s[0]=c;
    }
    cout<<s;

}
