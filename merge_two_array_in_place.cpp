/**
*    author: umakant
*    date: 2023-02-28 07:05:12
**/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif
    
    int arr[5] = {10,15,18,19,20};
    int dep[5] = {1,4,12,13,17};

    //logic: traverse through 1st array and compare with root of min_heap of second array

    make_heap(dep,dep+5,greater<int>());

    for(int i = 0; i < 5; i++){
        if(arr[i] > dep[0]){
            int temp = arr[i];
            arr[i] = dep[0];
            pop_heap(dep,dep+5,greater<int>());
            dep[4] = temp;
            push_heap(dep,dep+5,greater<int>());
        }
    }

//sort since dep[] array is min heap
    sort(dep,dep+5);

    for(int x: arr){
        cout << x << " ";
    }
    cout << endl;
    for(int x: dep){
        cout << x << " ";
    }

    


}