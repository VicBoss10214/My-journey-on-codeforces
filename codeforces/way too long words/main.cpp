#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int size=a.size();
        if(size>10)
        {
            cout<<a[0]<<size-2<<a[size-1]<<endl;
        }
        else
        {
            cout<<a<<endl;
        }

    }
    return 0;
}
