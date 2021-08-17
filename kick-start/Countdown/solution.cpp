#include<iostream>
using namespace std;
unsigned int countDown(unsigned int n, unsigned int k)
{
    unsigned int element, no_countdown = 0, temp = k;
    for(int i=0;i<n;++i)
    {
        cin>>element;
        if(element == temp)
        {
            if(element == 1)
            {
                temp = k;
                ++no_countdown;
            }
            else --temp;
        }
        else if(element == k)
        {
            temp = k-1;
        }
        else temp = k;
    }
    return no_countdown;
}
int main()
{
    unsigned int testCase, n, k;
    cin>>testCase;
    for(unsigned int i = 0; i < testCase; ++i)
    {
        cin>>n>>k;
        cout<<"Case #"<<i+1<<": "<<countDown(n,k)<<endl;
    }
    return 0;
}
