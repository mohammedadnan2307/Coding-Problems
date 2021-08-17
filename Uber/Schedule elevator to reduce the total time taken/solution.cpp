#include<iostream>
#include<algorithm>
using namespace std;
int time_taken(int* arr, int n, int k)
{
    sort(arr, arr + n);  // sort ascending
    int t = 0, rem = 0;   // t-> timetaken rem->no_removed
    while (rem < n)
    {
        t = t + (2 * (arr[n - rem - 1]));
        rem = rem + k;
    }
    return t;
}
int main()
{
    int k, n;
    cin >> k >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int t = time_taken(arr, n, k);
    delete[]arr;
    cout << t;
    return 0;
}
