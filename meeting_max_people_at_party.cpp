/**
 *    author: umakant
 *    date: 2023-02-27 12:31:32
 **/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif

    int arr[6] = {900, 940, 950, 1100, 1500, 1800};
    int dep[6] = {910, 1200, 1120, 1130, 1900, 2000};

    sort(arr, arr + 6);
    sort(dep, dep + 6);

    int count = 1, max_count = 1;

    int i = 1, j = 0;

    while (i < 6)
    {
        if (arr[i] < dep[j])
        {
            count++;
            i++;
        }
        else
        {
            count--;
            j++;
        }
        max_count = max(max_count, count);
    }

    cout << max_count << endl;
}