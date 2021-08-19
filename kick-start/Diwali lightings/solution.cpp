#include <iostream>
#include <string>
using namespace std;
typedef unsigned long long int bigint;
void Solve()
{
    string light;
    cin >> light;
    bigint x, y;
    cin >> x >> y;
    int n = light.length();
    int a = (x - 1) % n, b = (y - 1) % n;
    bigint range = (y - x), blue = 0;
    if (range == b - a)
    {
        for (int i = a; i <= b; ++i)
        {
            if (light[i] == 'B') ++blue;
        }
    }
    else
    {
        bigint flag1 = (x - 1) + (n - a);
        if (y > flag1 + n)
        {
            for (int i = a; i < n; ++i)
            {
                if (light[i] == 'B') ++blue;
            }
            if (b != n - 1)
            {
                for (int i = 0; i <= b; ++i)
                {
                    if (light[i] == 'B') ++blue;
                }
            }
            int count = 0;
            for (int i = 0; i < n; ++i)
            {
                if (light[i] == 'B') ++count;
            }
            bigint flag2 = y / n;
            flag2 = flag2 * n;
            flag1 = (flag2 - flag1) / n;
            blue = blue + flag1 * count;
        }
        else
        {
            for (int i = a; i < n; ++i)
            {
                if (light[i] == 'B') ++blue;
            }
            for (int i = 0; i <= b; ++i)
            {
                if (light[i] == 'B') ++blue;
            }
        }
    }
    cout << blue << endl;
}
int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; ++i)
    {
        cout << "Case #" << i + 1 << ": ";
        Solve();
    }
    return 0;
}
