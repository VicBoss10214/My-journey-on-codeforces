#include <iostream>
using namespace std;
int main()
{
    long long k,n,w,s=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        s+=i*k;
    }
    long long b=s-n;
    if(b>0)
    {
        cout<<b;
    }
    else
    {
        cout<<0;
    }
    return 0;
}
