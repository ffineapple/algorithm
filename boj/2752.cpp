// https://www.acmicpc.net/problem/2752
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v(3);
    int MIN = 1000001, MAX = 0;
    for(int i = 0; i < 3; i++) {
        cin >> v[i];
        if(v[i] < MIN) MIN = v[i];
        if(v[i] > MAX) MAX = v[i];
    }

    cout << MIN << " ";
    for(int e : v) {
        if(e != MIN && e != MAX) cout << e << " ";
    }
    cout << MAX;
}
