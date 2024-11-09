#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            for(int j=i;j<n-1;j++)
            {
                s[j]=s[j+1];
            }
            count++;
            n--;
            i--;
        }
    }
    cout<<count;
    return 0;
}
