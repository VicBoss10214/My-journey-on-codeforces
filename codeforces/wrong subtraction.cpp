#include <iostream>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    while(k--)
    {
        if(n%10==0)
        {
            n=n/10;
        }
        else
        {
            n--;
        }
    }
    cout<<n;
    return 0;
}
