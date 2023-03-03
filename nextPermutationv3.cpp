/**
 *    author: umakant
 *    date: 2023-03-02 14:54:01
 **/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define endl '\n'

void nextPermutation(vector<int> &nums)
{
   next_permutation(nums.begin(),nums.end());

    for (auto x : nums)
    {
        cout << x << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif

    vector<int> v = {2, 3, 1};

   
    nextPermutation(v);
}