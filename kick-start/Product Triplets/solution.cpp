#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
void triplets(int n)
{
    vector<unsigned int> arr;
    unsigned int a, b, c, min;
    int count = 0, zero = 0, ones = 0, no_a, no_b, no_c;
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        if (a == 0) ++zero;
        else if (a == 1) ++ones;
        else arr.push_back(a);                     // dont input 0's & 1's
    }
    n = arr.size();                                // update size of the arr without 0's & 1's   
    if (zero > 1)                                  // consider the cases of 0's
    {
        count = (n + ones) * (((zero) * (zero - 1)) / 2);
        if (zero > 2)
        {
            count = count + (((zero) * (zero - 1) * (zero - 2)) / 6);
        }
    }
    if (ones > 2)                                  // consider the cases of 1's
    {
        count = count + (((ones) * (ones - 1) * (ones - 2)) / 6);
    }
    sort(arr.begin(), arr.end());                  // sort in ascending-> then traverse from last 
    for (int i = n - 1; i >= 0; --i)
    {
        a = arr[i];
        no_a = 1;
        while (i > 0)
        {
            if (arr[i - 1] == a)                   // calculate no of a's
            {
                ++no_a;
                --i;
            }
            else break;
        }
        if (ones > 0)
        {
            count = count + ((ones * (no_a) * (no_a - 1)) / 2);
        }
        min = sqrt(a);
        for (int j = i - 1; j >= 0; --j)
        {
            b = arr[j];
            no_b = 1;
            if (b < min) break;
            else if (a % b == 0)
            {
                while (j > 0)                     // calculate no of b's
                {
                    if (arr[j - 1] == b)
                    {
                        ++no_b;
                        --j;
                    }
                    else break;
                }
                c = a / b;
                no_c = 1;
                if (b == c)
                {
                    count = count + ((no_a * (no_b) * (no_b - 1)) / 2);
                    continue;                     // Find next b
                }
                else
                {
                    for (int k = j - 1; k >= 0; --k)
                    {
                        if (arr[k] == c)
                        {
                            while (k > 0)                 // calculate no of c's
                            {
                                if (arr[k - 1] == c)
                                {
                                    ++no_c;
                                    --k;
                                }
                                else break;
                            }
                            count = count + no_a * no_b * no_c;
                            break;
                        }
                        else if (arr[k] < c) break;
                    }
                }
            }
        }
    }
    cout << count << endl;
    return;
}
int main()
{
    int testCases, n;
    cin >> testCases;
    for (int i = 0; i < testCases; ++i)
    {
        cin >> n;
        cout << "Case #" << i + 1 << ": ";
        triplets(n);
    }
    return 0;
}
