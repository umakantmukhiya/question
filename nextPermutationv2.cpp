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
    int i = nums.size() -1;
    int j = 0;
    int flag = 0;
    for(; i > 0; i--){
        j = i-1;
        if(nums[j] < nums[i]){
            flag = 1;
           break;
        }
    }

    int index_i = j+1;
    int min_i = 0;
    int min_val = INT_MAX;
    for(;index_i < nums.size(); index_i++){
        if(nums[index_i] > nums[j] && nums[index_i] < min_val){
            min_val = nums[index_i];
            min_i = index_i;
        }
    }

    swap(nums[j],nums[min_i]);



    if(flag == 1){
        sort(nums.begin() + j+1, nums.end());


    }
    else{
        reverse(nums.begin(),nums.end());
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