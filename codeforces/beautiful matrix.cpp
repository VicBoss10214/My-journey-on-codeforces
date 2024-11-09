#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    int matrix[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(matrix[i][j]==1)
            {
                m=i;
                n=j;
            }

        }
    }
    int moves=abs(m-2)+abs(n-2);
    cout<<moves;
    return 0;
}
