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

    int i = nums.size() - 1;
    int j = i - 1;
    int flag = 0;
    int signal = 0;
    int index1 = nums.size() - 1;
    int index2 = -1;

    for (; i > 0; i--)
    {
        j = i - 1;
        for (; j >= 0; j--)
        {
            if (nums[j] < nums[i])
            {
                flag = 1;
                signal = 1;

                break;
            }
        }

        if (signal == 1)
        {
            if (j > index2)
            {
                index2 = j;
                index1 = i;
                signal = 0;
            }
        }
    }

    if (flag == 0)
    {
        reverse(nums.begin(), nums.end());
    }

    else
    {

        int key = nums[index2];
        nums[index2] = nums[index1];
        nums[index1] = key;

        int a = index2 + 1;
        int b = nums.size() - 1;

        while (a < b)
        {
            if (nums[a] > nums[b])
            {
                int key = nums[a];
                nums[a] = nums[b];
                nums[b] = key;
                a++;
            }
            b--;
        }
    }

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