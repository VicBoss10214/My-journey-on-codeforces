#include <iostream>
using namespace std;
int main()
{
    long long x,quo,rem,s=0;
    cin>>x;
    int a[]={5,4,3,2,1};
    while(x>0)
    {
        for(int i=0;i<5;i++)
        {
            rem=x%a[i];
            quo=x/a[i];
            s+=quo;
            x=rem;
        }
    }
    cout<<s;
    return 0;
}
