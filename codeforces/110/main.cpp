#include <iostream>

using namespace std;

int main()
{
    int n;
    int count=0;
    cin>>n;
    while(n--)
    {
        int s[3];
        for(auto& element : s)
        {
            cin>>element;
        }
        int sum=s[0]+s[1]+s[2];
        if(sum>=2)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
