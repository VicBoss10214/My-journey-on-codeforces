#include <bits/stdc++.h>
using namespace std;
int ghoraghuri(int n,int a, int b,int i,int j,string s,int depth)
{
    if(depth>1000)
        {
            return 0;
        }
    for(int k=0;k<n;k++)
        {
            if((a==i)&&(b==j))
            {
                return 1;
            }
            if(s[k]=='E')
            {
                i++;
            }
            else if(s[k]=='W')
            {
                i--;
            }
            else if(s[k]=='N')
            {
                j++;
            }
            else if(s[k]=='S')
            {
                j--;
            }
        }
    return(ghoraghuri(n,a,b,i,j,s,depth+1));
}
int main()
{
    int t,n,a,b;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>s;
        int res=ghoraghuri(n,a,b,0,0,s,0);
        if(res==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;;
        }
    }
    return 0;
}
