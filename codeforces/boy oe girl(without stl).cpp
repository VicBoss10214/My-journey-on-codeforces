#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int size=s.size();
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(s[i]==s[j])
            {
                for(int k=j;k<size-1;k++)
                {
                    s[k]=s[k+1];
                }
                size--;
                j--;
            }
        }
    }
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
