#include <iostream>

using namespace std;

int main()
{
    int n,k;
    int nrp=0;
    cin>>n>>k;
    int score[n];
    for(auto& elements : score)
    {
        cin>>elements;
    }
    int th=score[k-1];
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        sum+=score[i];
        if(score[i]>=th&&score[i]>0)

        {
            nrp++;
        }

    }
    cout<<nrp;
    return 0;
}
