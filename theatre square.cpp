#include <iostream>
using namespace std;
int main()
{
    long long n,m,a,b,c;
    cin>>n>>m>>a;
    if(n%a)
    {
        b=(n/a)+1;
    }
    else
    {
        b=n/a;
    }
    if(m%a)
    {
        c=(m/a)+1;
    }
    else
    {
        c=m/a;
    }
    long long d=b*c;
    cout<<d;
    return 0;
}
