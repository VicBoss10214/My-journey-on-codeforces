#include <iostream>
using namespace std;
int main()
{
    int r,c,a,p,q,t,s;
    cin>>r>>c;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cin>>a;
            if(a==1)
            {
                p=j;
                q=i;
            }
            else if(a==2)
            {
                t=j;
                s=i;
            }
        }
    }
    int x,y;
    x=abs(p-t);
    y=abs(q-s);
    int point=x+y*2;
    cout<<point;
    return 0;
}
