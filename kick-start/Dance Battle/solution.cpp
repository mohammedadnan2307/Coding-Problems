#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
unsigned int honor()
{
    unsigned int n, honor = 0, i = 0;   // n is size of lineup, i is index of lineup
    long int energy;
    cin >> energy >> n;                 
    vector<long int> lineup(n);         // lineup as vector of size n
    for (int i = 0; i < n; ++i) cin >> lineup[i];      //input lineup of all teams
    sort(lineup.begin(), lineup.end()); // sort lineup in ascending order
    if (energy <= lineup[0]) return 0;  // no energy to dance with anyone-> so leave
    while (i < n)
    {
        if (energy - lineup[i] > 0)   // sufficient energy to dance
        {
            energy -= lineup[i];      // energy reduces
            ++honor;                  // honor increases
            ++i;                      // move to next team
        }
        else                          // if no energy to dance
        {
            if (i == n - 1) return honor; // if final team-> truce & leave (cant recruit anyone)
            else
            {
                if(honor>0)           // recruit the big one->final team 
                {
                    if(i==n-2) return honor; // either case honor is remains same
                    else
                    {
                        energy = energy + lineup[n-1]; // increase energy
                        --honor;      // honor decreases                  
                        --n;          // team size is decreased at end
                        continue;     // go again and dance
                    }
                }
                else return honor;    // if no honor-> move out
            }
        }
    }
    return honor;
}
int main()
{
    unsigned int testCases;
    cin >> testCases;
    for (unsigned int i = 0; i < testCases; ++i)
    {
        cout << "Case #" << i + 1 << ": " << honor() << endl;
    }
    return 0;
}
