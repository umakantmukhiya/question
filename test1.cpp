/**
*    author: umakant
*    date: 2023-02-28 16:13:30
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
    
    int a = 2;
    int b = 3;

    a = a - b;
    b =  a + b;
    a =  b - a;

    cout << a << " " << b << endl;



}